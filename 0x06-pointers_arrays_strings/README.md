**0-strcat.c** is a C function that concatenates two strings. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.

**1-strncat.c** is a C function that concatenates two strings. This is similar to the previous function, except that:
- it will use at most n bytes from src; and
- src does not need to be null-terminated if it contains n or more bytes.

**2-strncpy.c** is a C function that copies a string. It works exactly like strncpy.

**3-strcmp.c** is a C function that compares two strings. It works exactly like strcmp.

**4-rev_array.c** is a C function that reverses the content of an array of integers.

**5-string_toupper.c** is a C function that changes all lowercase letters of a string to uppercase.

**6-cap_string.c** is a C function that capitalizes all words of a string. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

**7-leet.c** is a C function that encodes a string into 1337.
- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
- Prototype: char *leet(char *);
- You can only use one if in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation
