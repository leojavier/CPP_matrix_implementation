/*
* LSST Data Management System
* See COPYRIGHT file at the top of the source tree.
*
* This product includes software developed by the
* LSST Project (http://www.leojavier.com/).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the LSST License Statement and
* the GNU General Public License along with this program. If not,
* see <http://www.lsstcorp.org/LegalNotices/>.
*/
#include <iostream>
#include <vector>
#include "matrix.h"

int main()
{
  
  std::vector< std::vector<float > > initial_grid(7, std::vector<float>(5, 0.4));

  Matrix matrixa(initial_grid);
  
  //Print matrixa
  matrixa.matrix_print();

  // Print number of row
  std::cout << matrixa.getRows();

  //Print the number of columns
  std::cout << matrixa.getColumns();

  // Transpose matrix
  Matrix transposed = matrixa.matrix_transpose();

  // Print transposed matrix
  transposed.matrix_print();

  // 7x5 2-dimensional vector with values 0.2
  std::vector <std:: vector <float> > 
      second_grid (7, std::vector <float>(5, 0.2));

  Matrix matrixb(second_grid);

  Matrix matrixsum(matrixa.matrix_addition(matrixb));

  matrixsum.matrix_print();

  return 0;
}