#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the bit.
 * @index: index to set the value at
 *
 * Return: -1 if an error occurs.
 * Otherwise, 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int uli;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	uli = 1 << index;
	*n = *n | uli;
	return (1);
}
