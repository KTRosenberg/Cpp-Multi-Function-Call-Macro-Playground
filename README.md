# Cpp-Multi-Function-Call-Macro-Playground
Playing with variable number argument macros for calling multiple functions in a row

This small test was prompted by a problem my group needs to solve in our object-oriented programming translation course project -- 
We need to call (programmatically) any unknown-length `__init()` function belonging to a class immediately after calling a class's constructor, 
and we have to save a pointer to that class in addition to passing that same pointer to __init.
If we called __init inside a constructor, then we would need to write a constructor for each variation of __init.

The resulting macro is an experiment to see whether an "okay" one-line instruction would be workable for each class and its available __init functions.
(The __init functions must be static, but this is perfect, as the functions in the translator structs must also be static anyway.)
 
# Definition and Usage
    #define NEW(var, cls, ...) cls* var = new cls(); cls::__init(var, ##__VA_ARGS__)
    
    // USAGE:
    // e.g.
    
    NEW(a1, __A, 'a', 'a');
    
    // stores in a new variable of name "a1" an instance of __A* whose __init takes (__A*, char, char)





