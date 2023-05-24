#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of this function
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*a)(int, char **) = main;
	unsigned char op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		op = *(unsigned char *)a;
		printf("%.2x", op);

		if (i == b - 1)
			continue;
		printf(" ");

		a++;
	}

	printf("\n");

	return (0);
}
