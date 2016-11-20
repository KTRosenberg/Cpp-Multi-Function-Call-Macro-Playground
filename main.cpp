#include <iostream>
#include <stdint.h>
#include "Construct_One_Step.h"
#include "__A.h"
#include "__B.h"

#ifndef MAIN
#define MAIN
#endif

int main()
{

    // #define NEW(var, cls, args...) cls* var = new cls(); cls::__init(var, args)

    /*
    NEWOLD(a1, __A, 'a', 'a');
    NEWOLD(a2, __A, 'a');
    NEWOLD(a3, __A, nullptr);

    NEWOLD(b1, __B, 1, 1.0);
    NEWOLD(b2, __B, 'b');
    NEWOLD(b3, __B, nullptr);

    delete a1;
    delete a2;
    delete a3;

    delete b1;
    delete b2;
    delete b3;

     */

    // #define NEW(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)

    NEW(a1, __A, 'a', 'a');
    NEW(a2, __A, 'a');
    NEW(a3, __A);

    NEW(b1, __B, 1, 1.0);
    NEW(b2, __B, 'b');
    NEW(b3, __B);

    delete a1;
    delete a2;
    delete a3;

    delete b1;
    delete b2;
    delete b3;


    return 0;
}