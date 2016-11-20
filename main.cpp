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
    NEW(a1, __A, 'a', 'a');
    NEW(a2, __A, 'a');
    NEW(a3, __A, nullptr);

    NEW(b1, __B, 1, 1.0);
    NEW(b2, __B, 'b');
    NEW(b3, __B, nullptr);

    delete a1;
    delete a2;
    delete a3;

    delete b1;
    delete b2;
    delete b3;

     */

    // #define NEW2(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)

    NEW2(a1, __A, 'a', 'a');
    NEW2(a2, __A, 'a');
    NEW2(a3, __A);

    NEW2(b1, __B, 1, 1.0);
    NEW2(b2, __B, 'b');
    NEW2(b3, __B);

    delete a1;
    delete a2;
    delete a3;

    delete b1;
    delete b2;
    delete b3;


    return 0;
}