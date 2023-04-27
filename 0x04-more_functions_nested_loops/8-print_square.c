#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int a = 0, s = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (s < size)
			{
				_putchar(35);
				s++;
			}
			s = 0;
			a++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
