#ifndef MACRO_TESTS_CONSTRUCT_ONE_STEP_H
#define MACRO_TESTS_CONSTRUCT_ONE_STEP_H

// requires at least one arg
#define NEWOLD(var, cls, args...) cls* var = new cls(); cls::__init(var, args)

#define NEWold1(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)

// uses simplified class name
#define NEWold2(var, cls, ...) cls var = new __##cls(); __##cls::__init(var, ##__VA_ARGS__)

// re-assignable with simplified class name
#define NEWreold1(var, cls, ...) var = new __##cls(); __##cls::__init(var, ##__VA_ARGS__)

// re-assignable, prettier, reverses cls and var order, does not use simplified class name
#define NEW(cls, var, ...) new cls(); cls::__init(var, ##__VA_ARGS__)



#endif //MACRO_TESTS_CONSTRUCT_ONE_STEP_H
