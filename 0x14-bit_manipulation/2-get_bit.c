#include "main.h"

/**
 * get_bit - computes the value of a bit at a given index.
 * @n: the number to check
 * @index: the index to check
 *
 * Return: the binary representation of the number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	b = n & a;
	if (b == a)
		return (1);
	return (0);
}
