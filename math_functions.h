/*! \file
*   \brief Contains mathematical functions
*/

#include "constants.h"

/****************************************************//**
* @brief Check if number of type double is equal to zero
*
* @param[in] h processing variable of type double
*********************************************************/

bool IsZero(double h);

/****************************************************//**
* @brief Check if number of type double is less than zero
*
* @param[in] h processing variable of type double
*********************************************************/

bool IsLessThanZero(double h);

/****************************************************//**
* @brief Check if two numbers of type double are equal to each other
*
* @param[in] d1 processing variable 1 of type double
* @param[in] d2 processing variable 2 of type double
*********************************************************/

bool d_comp( double d1, double d2 );

/****************************************************//**
* @brief Solve linear equations in a bx + c = 0 form
*
* @param[in] b x coefficient
* @param[in] c free coefficient
* @param[out] x1 pointer to the root
*
* @return **INF_ROOTS** if infinitive number of roots
* @return **ERROR_NO_ROOTS** if equation is violated
* @return **ONE_ROOT** if equation has a root
*********************************************************/

enum NUM_ROOTS line_solver( double b, double c, double* x1 );

/*********************************************************//**
* @brief Solve quadratic equations in a ax^2 + bx + c = 0 form
*
* @param[in] a x^2 coefficient
* @param[in] b x coefficient
* @param[in] c free coefficient
* @param[out] x1 pointer to the first root of equation
* @param[out] x2 pointer to the second root of equation
*
* @return function **line_solver** if equation is linear
* @return **NO_ROOTS** if discriminant is less than 0 and equation has no solutions
* @return **ONE_ROOT** if discriminant is equal to 0 and equation has 1 solution
* @return **TWO_ROOTS** if discriminant is greater than 0 and equation has 2 solutions
**************************************************************/

enum NUM_ROOTS s_solver( double a, double b, double c, double* x1, double* x2 );
