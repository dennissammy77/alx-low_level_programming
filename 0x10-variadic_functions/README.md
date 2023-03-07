____0x10. C - Variadic functions____

/**Learning Objectives**/
What are variadic functions
How to use va_start, va_arg and va_end macros
Why and how to use the const type qualifier

___stdarg.h___
stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.
It provides facilities for stepping through a list of function arguments of unknown number and type.
Contents of stdarg.h are typicallyy used in variadic functions, though they may be used in other functions called by variadic functions.


Declaring variadic functions
Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter.
An example of such a function is printf. A typical declaration is

int check(int a, double b, ...);
Variadic functions must have at least one named parameter, so, for instance,

char *wrong(...);
is not allowed in C.

Defining variadic functions
The same syntax is used in a definition:

long func(char, double, int, ...);

long func(char a, double b, int c, ...)
{
    /* ... */
}

Accessing the arguments
To access the unnamed arguments, one must declare a variable of type va_list in the variadic function.

A.2 Variadic Functions
ISO C defines a syntax for declaring a function to take a variable number or type of arguments.

Why Variadic Functions are Used

