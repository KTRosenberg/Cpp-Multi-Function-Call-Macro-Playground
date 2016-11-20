//
// Created by Karl Toby Rosenberg on 11/19/16.
//

#ifndef MACRO_TESTS_A_H
#define MACRO_TESTS_A_H



struct __A {

    __A();

    static void __init(__A*, char, char);
    static void __init(__A*, char);
    static void __init(__A*);

};


#endif //MACRO_TESTS_A_H
