#include <stdio.h>
#include "math_functions.h"
#include "TestMode.h"
#include "constants.h"

/*struct Data_of_tests{
    const double a,b,c;
    const double x1,x2;
    const int nRoots;
};

Data_of_tests data_list[Num_Tests] = {{.a = 0,.b = 0,  .c = 0,  .x1 = 0, .x2 = 0, .nRoots = INF_ROOTS},
                                      {.a = 1,.b = 5,  .c = 6,  .x1 = -3,.x2 = -2,.nRoots = 2},
                                      {.a = 1,.b = -70,.c = 600,.x1 = 10,.x2 = 60,.nRoots = 2},
                                      {.a = 1,.b = 2,  .c = 1,  .x1 = -1,.x2 = -1,.nRoots = 1}};

int SquareTestStruct(const Data_of_tests* Ref){
    double x1 = 0, x2 = 0, i = 0;
    int nRoots = s_solver(Ref->a, Ref->b, Ref->c, Ref->&x1, Ref->&x2);
    if (x2 < x1){
        i = x2;
        x2 = x1;
        x1 = i;
    }
    if (d_comp(x1,Ref->x1) || d_comp(x2,Ref->x2) || d_comp(nRoots, Ref->nRoots)){
        printf("ERROR: x1 = %lg, x2 = %lg, nRoots = %int, expected: x1ref = %lg, x2ref = %lg, nRootsref = %d\n", x1, x2, nRoots, Ref->x1, Ref->x2, Ref->nRoots);
        return 0;
    }
    else{
        printf("Test passed\n");
        return 1;
    }
}

void FullTestModeStruct(){
    for (int i = 0;i < Num_Tests;i++){
        SquareTestStruct(&data_list[i]);
    }
}*/

int SquareTest ( double a, double b, double c, double x1ref, double x2ref, int nRootsref ){

    double x1 = 0, x2 = 0, i = 0;
    int nRoots = s_solver( a, b, c, &x1, &x2 );

    if (x2 < x1){
        i = x2;
        x2 = x1;
        x1 = i;
    }
    if ( !d_comp( x1, x1ref ) || !d_comp( x2, x2ref ) || !d_comp( nRoots, nRootsref ) ){
        printf("ERROR: x1 = %lg, x2 = %lg, nRoots = %d, expected: x1ref = %lg, x2ref = %lg, nRootsref = %d\n", x1, x2, nRoots, x1ref, x2ref, nRootsref);
        return 0;
    }
    else{
        printf("Test passed\n");
        return 1;
    }
}

int FullTestMode(){

    int num_OK = 0;
    num_OK += SquareTest( 1,   5,   6, -3, -2, TWO_ROOTS);
    num_OK += SquareTest( 0,   0,   0,  0,  0, INF_ROOTS);
    num_OK += SquareTest( 1, -70, 600, 10, 60, TWO_ROOTS);
    num_OK += SquareTest( 1,   2,   1, -1, -1, ONE_ROOT );
    return num_OK;
}
