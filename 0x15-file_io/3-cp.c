#include "main.h"

/**
 * cust_exit - prints error messages and exits with
 * exit value.
 * @err: exit value or file descriptor
 * @fname: file name
 * @fdesc: file descriptor
 *
 * Return: 0 on success
 */
int cust_exit(int err, char *fname, int fdesc)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(err);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fname);
			exit(err);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fname);
			exit(err);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc);
			exit(err);
		default:
			return (0);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 97-100 (exit value errors), 0 on success
 */
int main(int argc, char *argv[])
{
	int fdesc_1, fdesc_2, tot_read, tot_wrote;
	char *b[1024];

	if (argc != 3)
		cust_exit(97, NULL, 0);

	fdesc_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdesc_2 == -1)
		cust_exit(99, argv[2], 0);

	fdesc_1 = open(argv[1], O_RDONLY);
	if (fdesc_1 == -1)
		cust_exit(98, argv[1], 0);

	while ((tot_read = read(fdesc_1, b, 1024)) != 0)
	{
		if (tot_read == -1)
			cust_exit(98, argv[1], 0);

		tot_wrote = write(fdesc_2, b, tot_read);
		if (tot_wrote == -1)
			cust_exit(99, argv[2], 0);
	}

	close(fdesc_2) == -1 ? (cust_exit(100, NULL, fdesc_2)) : close(fdesc_2);
	close(fdesc_1) == -1 ? (cust_exit(100, NULL, fdesc_1)) : close(fdesc_1);
	return (0);
}
