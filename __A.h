#ifndef MACRO_TESTS_A_H
#define MACRO_TESTS_A_H

#ifndef MAIN
#include <iostream>
#include <stdint.h>
using namespace std;
#endif

struct __A;
// simplified name
typedef __A* A;

struct __A
{
    char c1;
    char c2;

    __A();

    static void __init(__A*, char, char);
    static void __init(__A*, char);
    static void __init(__A*);

    void display();

};


#endif //MACRO_TESTS_A_H
