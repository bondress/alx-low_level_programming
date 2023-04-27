#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: the number of times the character \ should be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 0, s = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (s < a)
			{
				_putchar(' ');
				s++;
			}
			a++;
			s = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
