#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "constants.h"
#include "output.h"

void user_output( double x1, double x2, double c, int nRoots ){

    switch (nRoots){
        case NO_ROOTS:
            printf("Equation doesn't have roots\n");
            break;
        case ONE_ROOT:
            assert( isfinite(x1) );
            printf("Equation has 1 root: x = %lg\n", x1);
            break;
        case TWO_ROOTS:
            assert( isfinite(x1) );
            assert( isfinite(x2) );
            printf("x1 = %lg, x2 = %lg\n", x1, x2);
            break;
        case INF_ROOTS:
            printf("Equation has infinite number of roots\n");
            break;
        case ERROR_NO_ROOTS:
            printf("ERROR: c = %lg = 0, no roots\n", c);
            break;
        default:
            printf("ERROR: number of roots: %d\n", nRoots);
    }
}
