#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
	}

	if (i % 2 == 0)
	{
		for ((j = i / 2); str[j] != 0; j++)
		{
			c = str[j];
			_putchar(c);
		}
	}
	else
	{
		for ((j = (i - 1) / 2); str[j] != 0; j++)
		{
			c = str[j];
			_putchar(c);
		}
	}
	_putchar('\n');
}
