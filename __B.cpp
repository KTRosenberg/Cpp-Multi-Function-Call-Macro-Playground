//
// Created by Karl Toby Rosenberg on 11/19/16.
//

#include "__B.h"

#ifndef MAIN
#include <iostream>
#include <stdint.h>
using namespace std;
#endif

__B::__B() {};

void __B::__init(__B* __this, int32_t i, float f)
{
    cout << "initializing __B with __B*, int32_t, float" << endl;
}

void __B::__init(__B* __this, char c1)
{
    cout << "initializing __B with __B*, char" << endl;
}

void __B::__init(__B* __this)
{
    cout << "initializing __B with __B*" << endl;
}
