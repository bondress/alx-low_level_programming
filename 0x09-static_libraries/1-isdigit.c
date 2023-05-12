#include "main.h"

/**
 * _isdigit - checks for a digit (0 - 9).
 * @c: the character to be checked.
 *
 * Return: 1 if lowercase and 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	} else
		return (0);
}
