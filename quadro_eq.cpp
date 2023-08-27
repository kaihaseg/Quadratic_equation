#include "constants.h"
#include "math_functions.h"
#include "TestMode.h"
#include "input.h"
#include "output.h"

int main(void){

    printf("Program that solves quadratic equation in form: ax^2 + bx + c = 0\n");
    printf("Do you want to test the program?\n");
    printf("Enter Y for YES or any other key for NO:");

    int ans = getchar();
    if ( ans == 'Y' ){
        FullTestMode();
    }

    double a = NAN, b = NAN, c = NAN, x1 = NAN, x2 = NAN;   //ax^2 + bx + c = 0; a,b,c - coefficient; x1, x2 - roots

    user_input( &a, &b, &c );                               //Input

    int nRoots = s_solver( a, b, c, &x1, &x2 );             //Number of roots

    user_output( x1, x2, c, nRoots );                       //Output

    return 0;
}
