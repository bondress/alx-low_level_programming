**Task 0: dog.h**
Define a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char *

**Task 1: 1-init_dog.c**
Write a function that initialize a variable of type struct dog.

**Task 2: 2-print_dog.c**
Write a function that prints a struct dog
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.

**Task 3: dog.h**
Define a new type dog_t as a new name for the type struct dog.

**Task 4: 4-new_dog.c**
Write a function that creates a new dog.
- You have to store a copy of name and owner
- Return NULL if the function fails

**Task 5: 5-free_dog.c**
Write a function that frees dogs.
