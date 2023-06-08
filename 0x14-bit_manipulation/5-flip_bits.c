#include "main.h"

/**
 * flip_bits - computes the number of bits needed to
 * be flipped to get from one number to another.
 * @n: the number.
 * @m: number to flip @n to.
 *
 * Return: the number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int uli = n ^ m, num_of_bits = 0;

	while (uli > 0)
	{
		num_of_bits += (uli & 1);
		uli >>= 1;
	}
	return (num_of_bits);
}
