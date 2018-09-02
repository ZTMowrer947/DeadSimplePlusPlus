# DeadSimplePlusPlus
A C++ Implementation of my DeadSimple Programming Language

## What is DeadSimple?
DeadSimple is an esoteric programming language created by me with only 4 operations. The name comes from the fact that it is, well...

**Dead Simple to program in.**

This language was created as a proof-of-concept for a very simple yet limited language that could at least display output to the console without directly altering memory values. This language technically does not use a stack internally, but incrementing and decrementing numbers does simulate the use of a stack that stores integers.

### Syntax
The four instructions are applied to a single integer variable.

- _: Resets to 0
- +: Increments by 1
- -: Decrements by 1
- S: Prints out the Unicode character represented by the integer value

All other characters are ignored, and thus can be used in comments.

### Example 'Hello, World!' Program
```
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++S # H
+++++++++++++++++++++++++++++S # e
+++++++SS # ll
+++S # o
_
++++++++++++++++++++++++++++++++++++++++++++S # ,
------------S # space
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++S # w
--------S # o
+++S # r
------S # l
--------S # d
_
+++++++++++++++++++++++++++++++++S # !
_
++++++++++S # newline
```

This can also be written as a one-liner:
```
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++S+++++++++++++++++++++++++++++S+++++++SS+++S_++++++++++++++++++++++++++++++++++++++++++++S------------S+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++S--------S+++S------S--------S_+++++++++++++++++++++++++++++++++S_++++++++++S
```

### Using the interpreter ###
You must have a C++ compiler (I've currently only tested GCC) to compile and use this interpreter.
Make (for running the make file) is recommended.

1. Download the project
1. 
    - If you are using Make, just run `make` to compile it and `make install` to install. You can also specify the install prefix using `make PREFIX=*dirname* install`.
    - If you don't have make, use your C++ compiler to compile `main.cpp`. Name the executable `ds++` and save into the desired location.
1. Run `ds++ *filename*.ds` to run the interpreter with the name of the DeadSimple file to interpret.
