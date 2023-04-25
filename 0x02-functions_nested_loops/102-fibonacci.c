#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 3;

	long int n1 = 1, n2 = 2;
	long int n = n1 + n2;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	while (c <= 50)
	{
		if (c == 50)
		{
			printf("%lu \n", n);
		}
		else
		{
			printf("%lu, ", n);
		}

		n1 = n2;
		n2 = n;

		n = n1 + n2;
		c++;
	}

	return (0);
}
