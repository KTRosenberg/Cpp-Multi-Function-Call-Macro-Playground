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
    // re-assignable, prettier, reverses cls and var order, does not use simplified class name

    // #define NEW(cls, var, ...) new cls(); cls::__init(var, ##__VA_ARGS__)

    B b_next = NEW(__B, b_next);

    // just to show equivalency
    __B* b_next_ptr = b_next;

    b_next->display();

    delete b_next;

    // re-assign
    cout << "re-assigning, ";
    b_next = NEW(__B, b_next, 1, 1.1);

    b_next->display();

    delete b_next;

    // re-assign
    cout << "re-assigning again, ";

    b_next = NEW(__B, b_next, 'b');

    b_next->display();

    delete b_next;


    /*
    // OLD TESTS BELOW



    // #define NEW(var, cls, args...) cls* var = new cls(); cls::__init(var, args)


    NEWOLD(a_1, __A, 'a', 'a');
    NEWOLD(a_2, __A, 'a');
    NEWOLD(a_3, __A, nullptr);

    NEWOLD(b_1, __B, 1, 1.0);
    NEWOLD(b_2, __B, 'b');
    NEWOLD(b_3, __B, nullptr);

    delete a_1;
    delete a_2;
    delete a_3;

    delete b_1;
    delete b_2;
    delete b_3;



    // #define NEW(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)

    A arr_a1[3];

    NEWold1(a1, __A, 'a', 'a');
    NEWold1(a2, __A, 'a');
    NEWold1(a3, __A);

    arr_a1[0] = a1;
    arr_a1[1] = a2;
    arr_a1[2] = a3;


    B arr_b1[3];

    NEWold1(b1, __B, 1, 1.0);
    NEWold1(b2, __B, 'b');
    NEWold1(b3, __B);

    arr_b1[0] = b1;
    arr_b1[1] = b2;
    arr_b1[2] = b3;


    for (A a_ptr : arr_a1)
    {
       a_ptr->display();
    }

    for (B b_ptr : arr_b1)
    {
        b_ptr->display();
    }

    for (__A* a_ptr : arr_a1)
    {
        delete a_ptr;
    }

    for (__B* b_ptr : arr_b1)
    {
        delete b_ptr;
    }


    cout << "-------------------" << endl;

    // uses simplified class names
    // #define NEWold2(var, cls, ...) cls var = new __##cls(); __##cls::__init(var, ##__VA_ARGS__)

    NEWold2(a4, A, 'a', 'a');
    NEWold2(a5, A, 'a');
    NEWold2(a6, A);

    delete a4;
    delete a5;
    delete a6;

    cout << "-------------------" << endl;

    // re-assignable with simplified class name
    // #define NEWreold1(var, cls, ...) var = new __##cls(); __##cls::__init(var, ##__VA_ARGS__)

    // create b4 variable
    B  NEWreold1(b4, B, 'b', 'b');

    b4->display();

    delete b4;
    // re-assign
    cout << "re-assigning, ";
    NEWreold1(b4, B);

    b4->display();

    delete b4;

    */

    return 0;

}
