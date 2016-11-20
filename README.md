# Cpp-Multi-Function-Call-Macro-Playground
Playing with variable number argument macros for calling multiple functions in a row

    #define NEW2(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)

This small test was prompted by a problem my group needs to solve in our program translation course project -- 
We need to call (programmatically) any of unknown-length __init() function immediately after calling a class constructor.
If we called __init inside a constructor, then we would need to write a constructor for each variation of __init.

This macro is an experiment to see whether an "okay" one-line instruction would be workable for each class and __init().

