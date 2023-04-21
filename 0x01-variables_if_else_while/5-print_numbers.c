#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Print all single digit numbers of base 10
 * starting from 0, followed by a new line."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	putchar('\n');
	return (0);
}

