#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a pointer to the matrix of integers
 * @size: the size of the matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n, add1 = 0, add2 = 0;

	for (n = 0; n < size; n++)
	{
		add1 += a[n];
		a += size;
	}

	a -= size;

	for (n = 0; n < size; n++)
	{
		add2 += a[n];
		a -= size;
	}

	printf("%d, %d\n", add1, add2);
}
