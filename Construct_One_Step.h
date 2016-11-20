#ifndef MACRO_TESTS_CONSTRUCT_ONE_STEP_H
#define MACRO_TESTS_CONSTRUCT_ONE_STEP_H

// requires at least one arg
#define NEWOLD(var, cls, args...) cls* var = new cls(); cls::__init(var, args)

#define NEW(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)


#endif //MACRO_TESTS_CONSTRUCT_ONE_STEP_H
