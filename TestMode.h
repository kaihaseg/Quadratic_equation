/*! \file
    \brief File which contains functions for testing the program
*/

#ifndef CONSTANTS_H
#define CONSTANTS_H

/****************************************************//**
* @brief Checks the whole program by comparing resulting roots and number of them with reference values
*
* @param[in] a coefficient **a**
* @param[in] b coefficient **b**
* @param[in] c coefficient **c**
* @param[in] x1ref first reference root
* @param[in] x2ref second reference root
* @param[in] nRootsref reference number of roots
*
* @return **0** if test is passed
* @return **1** if test if failed
*********************************************************/

int SquareTest ( double a, double b, double c, double x1ref, double x2ref, int nRootsref );

//int SquareTestStruct(const struct Data_of_tests* Ref);
//void FullTestModeStruct();

#endif


/****************************************************//**
* @brief Calls function SquareTest() several times with different reference values
*
* @return Number of succeeded tests
*********************************************************/

int FullTestMode ();
