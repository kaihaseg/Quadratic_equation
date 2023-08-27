/*! \file
    \brief File which contains constants
*/

#ifndef CONSTANTS_H
#define CONSTANTS_H

/****************************************************//**
* @brief Epsilon for comparing numbers of type double
*********************************************************/

const double EPSILON = 1e-9; // Epsilon

/****************************************************//**
* @brief Number of tests of program
*********************************************************/

const int Num_Tests = 4;       // Number of tests

enum NUM_ROOTS{
    ERROR_NO_ROOTS, ///< Error, no roots
    NO_ROOTS,       ///< No roots
    ONE_ROOT,       ///< 1 roots
    TWO_ROOTS,      ///< 2 roots
    INF_ROOTS       ///< Infinite number of roots
};

#endif
