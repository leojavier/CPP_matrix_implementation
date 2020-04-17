#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {

  private:
    std::vector< std::vector<float> > grid;
    std::vector<int>::size_type rows;
    std::vector<int>::size_type columns;

  public:
    //Constructor function
    Matrix();
    Matrix(std::vector< std::vector<float> >);

    //Setters
    void setGrid(std::vector< std::vector<float> >);

    //Getters
    std::vector< std::vector<float> > getGrid();
    std::vector<int>::size_type getRows();
    std::vector<int>::size_type getColumns();

    //Methods
    Matrix matrix_transpose();
    Matrix matrix_addition(Matrix);
    void matrix_print();
};
#endif /* MATRIX_H */