#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: 0 if b is NULL or there is one or more chars in the
 * string b that is not 0 or 1. Otherwise, the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int i;

	ui = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		ui <<= 1;
		if (b[i] == '1')
			ui += 1;
	}
	return (ui);
}
