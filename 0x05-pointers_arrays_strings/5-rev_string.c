#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, rev;
	char c;

	for (i = '\0'; s[i] != 0; i++)
	{
	}
	rev = 0;
	for (i = i - 1; rev < i; rev++)
	{
		c = s[i];
		s[i] = s[rev];
		s[rev] = c;
		i--;
	}
}
