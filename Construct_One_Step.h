//
// Created by Karl Toby Rosenberg on 11/19/16.
//

#ifndef MACRO_TESTS_CONSTRUCT_ONE_STEP_H
#define MACRO_TESTS_CONSTRUCT_ONE_STEP_H

#define NEW(var, cls, args...) cls* var = new cls(); cls::__init(var, args)

#define NEW2(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)


#endif //MACRO_TESTS_CONSTRUCT_ONE_STEP_H
