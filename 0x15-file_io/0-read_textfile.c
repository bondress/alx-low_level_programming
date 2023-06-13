#include "main.h"

/**
 * read_textfile - reads a textfile and prints it
 * to the POSIX standard output.
 * @filename: the name of the text file
 * @letters: the number of letters is should read and print
 *
 * Return: 0 if filename is NULL, file cannot be opened
 * or read, write fails or does not write expected amount
 * of bytes. Otherwise, return the actual number of letters
 * it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t of, rf, wto;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	rf = read(of, b, letters);
	wto = write(STDOUT_FILENO, b, rf);

	free(b);
	close(of);
	return (wto);
}
