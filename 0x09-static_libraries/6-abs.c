#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n : the integer to be computed
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs = n * -1;

		return (abs);
	}

	return (n);
}
