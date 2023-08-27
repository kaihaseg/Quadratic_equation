#include <stdio.h>
#include <math.h>
#include "input.h"

void input_test(double* x){
    while ( scanf( "%lg", x ) != 1 ){
        printf("Wrong symbol, try again:\n");
        while ( getchar() != '\n' ){}
    }
}

void user_input( double* a, double* b, double* c ){
    printf("Enter a coefficient 'a' before x^2:\n");
    input_test(a);

    printf("Enter a coefficient 'b' before x:\n");
    input_test(b);

    printf("Enter a free coefficient 'c':\n");
    input_test(c);
}
