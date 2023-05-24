**Task 0: 0-print_name.c**
Write a function that prints a name.

**Task 1: 1-array_iterator.c**
Write a function that executes a function given as a parameter on each element of an array.

**Task 2: 2-int_index.c**
Write a function that searches for an integer.

**Task 3: 
Write a program that performs simple operations (addition, subtratction, multiplication, division and modulo).

This task requires that you create four different files.
- 3-calc.h: This file should contain all the function prototypes and data structures used by the program.

- 3-op_functions.c :This file should contain the 5 following functions (not more):
	- op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
	- op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
	- op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
	- op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
	- op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

- 3-get_op_func.c : This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

- 3-main.c: This file should contain your main function only.
	- You are not allowed to code any other function than main in this file
	- You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
	- You have to use atoi to convert arguments to int
	- You are not allowed to use any kind of loop
	- You are allowed to use a maximum of 3 if statements
