#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character followed by a new line.
 * @str: the string to be printed.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			c = str[i];
			_putchar(c);
		}
	}
	_putchar('\n');
}
