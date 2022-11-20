//
// Created by mfbut on 5/2/2019.
//

#ifndef MATRIX_TESTMATRIX_H
#define MATRIX_TESTMATRIX_H
#include <vector>
#include <string>
#include "gtest/gtest.h"
namespace MatrixTesting {
  using ParamType = std::vector<std::string>;
  class TestMatrix : public ::testing::TestWithParam<ParamType> { };


}

#endif //MATRIX_TESTMATRIX_H
