#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
