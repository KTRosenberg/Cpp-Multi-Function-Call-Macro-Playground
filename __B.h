//
// Created by Karl Toby Rosenberg on 11/19/16.
//

#ifndef MACRO_TESTS_B_H
#define MACRO_TESTS_B_H

#include <stdint.h>

struct __B {

    __B();

    static void __init(__B*, int32_t, float);
    static void __init(__B*, char);
    static void __init(__B*);

};


#endif //MACRO_TESTS_B_H
