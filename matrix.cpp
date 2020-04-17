#include "matrix.h"

Matrix::Matrix() {
  std::vector< std::vector<float> > initial_grid(4, std::vector<float>(4, 0));
  grid = initial_grid;
  rows = initial_grid.size();
  columns = initial_grid[0].size();
};

Matrix::Matrix(std::vector< std::vector<float> > initial_grid) {
  grid = initial_grid;
  rows = initial_grid.size();
  columns = initial_grid[0].size();
};

void Matrix::setGrid(std::vector< std::vector<float> > new_grid) { 
  grid = new_grid;
  rows = new_grid.size();
  columns = new_grid[0].size();
};

std::vector< std::vector<float> > Matrix::getGrid() {
  return grid;
};

std::vector<float>::size_type Matrix::getRows(){
  return rows;
};

std::vector<float>::size_type Matrix::getColumns() {
  return columns;
};

Matrix Matrix::matrix_transpose() {
  std::vector< std::vector<float> > newGrid;
  std::vector<float> newRow;

  for (size_t i = 0; i < columns; i++) {
    newRow.clear();
    for (size_t j = 0; j < rows; j++)
    {
      newRow.push_back(grid[j][i]);
    }
    newGrid.push_back(newRow);
  }
  return Matrix(newGrid);
}

Matrix Matrix::matrix_addition(Matrix other) {
  if((rows != other.getRows() || columns != other.getColumns())) {
    throw std::invalid_argument( "matrices are not the same size" );
  }

  std::vector< std::vector<float> > othergrid = other.getGrid();
  std::vector< std::vector<float> > result;
  std::vector<float> newRow;


  for (int i = 0; i < rows; i++)
  {
    newRow.clear();
    for (int j = 0; j < columns; j++)
    {
      newRow.push_back(grid[i][j] + othergrid[i][j]);
    }
    result.push_back(newRow);
  }
  return Matrix(result);
}

void Matrix::matrix_print() {
  for (size_t i = 0; i < rows; i++)
  {
    for (size_t j = 0; j < columns; j++)
    {
      std::cout << grid[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl << std::endl;
}