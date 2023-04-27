#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b = 0, s;

	if (size > 0)
	{
		while (b < size)
		{
			s = size - b - 1;
			while (a < size)
			{
				if (s > a)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
				a++;
			}
			b++;
			a = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
