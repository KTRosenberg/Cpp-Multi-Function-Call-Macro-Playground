#ifndef MACRO_TESTS_B_H
#define MACRO_TESTS_B_H

#ifndef MAIN
#include <iostream>
#include <stdint.h>
using namespace std;
#endif

struct __B
{
    int32_t i;
    float f;
    char c;

    __B();

    static void __init(__B*, int32_t, float);
    static void __init(__B*, char);
    static void __init(__B*);

    void display();

};


#endif //MACRO_TESTS_B_H
