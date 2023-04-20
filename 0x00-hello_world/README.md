0-preprocessor contains a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

1-compiler contains a script that compiles a C file but does not link.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c (Example: if the C file is main.c, the output file should be main.o)

2-assembler contains a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c. (Example: if the C file is main.c, the output file should be main.s)

3-name contains a script that compiles a C file and creates an executable named cisfun.
- The C file name will be saved the variable $CFILE

4-puts.c is a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. It uses the function puts. printf was not allowed. The program ends with the value 0.

5-printf.c is a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.

6-size.c is a C program that prints the size of various types on the computer it is compiled and run on.
