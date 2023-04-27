#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed.
 *
 * Return: void
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar(95);
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
