**0-strcat.c** is a C function that concatenates two strings. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.

**1-strncat.c** is a C function that concatenates two strings. This is similar to the previous function, except that:
- it will use at most n bytes from src; and
- src does not need to be null-terminated if it contains n or more bytes.
