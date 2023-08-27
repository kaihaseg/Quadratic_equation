#include <assert.h>
#include <math.h>
#include <cstddef>
#include "math_functions.h"

bool IsZero(double h){
   return (( fabs(h) - EPSILON ) <= 0 );
}

bool IsLessThanZero(double h){
    if ( h < -EPSILON ){
        return true;
    }
    else{
        return false;
    }
}

bool d_comp( double d1, double d2 ){
    return IsZero(d1 - d2);
}

enum NUM_ROOTS line_solver( double b, double c, double* x1 ){      //bx + c = 0
    if (IsZero(b)){
        if (IsZero(c)){
            return INF_ROOTS;
        }
        else{
            return ERROR_NO_ROOTS;
        }
    }
    else{
        *x1 = -c/b;
        return ONE_ROOT;
    }
}

enum NUM_ROOTS s_solver( double a, double b, double c, double* x1, double* x2 ){

    assert( isfinite(a) );
    assert( isfinite(b) );
    assert( isfinite(c) );

    if (IsZero(a)){
        return line_solver( b, c, x1 );
    }

    else{
        double D = b*b - 4*a*c; //Discriminant

        if (IsZero(D)){
            *x1 = *x2 = -b/2/a;

            return ONE_ROOT;
        }

        if (IsLessThanZero(D)){
            return NO_ROOTS;
        }

        else{
            double sqrtD = sqrt(D);

            *x1 = (-b + sqrtD)/2/a;
            *x2 = (-b - sqrtD)/2/a;

            return TWO_ROOTS;
        }
    }
    assert( x1 != NULL );
    assert( x2 != NULL );
    assert( !d_comp( *x1, *x2 ));
}

