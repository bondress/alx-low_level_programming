#include "main.h"

/**
 * *infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that stores the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i1 = 0, i2 = 0, j, k, l1, l2, m = 0;

	while (*(n1 + i1) != '\0')
		i1++;
	while (*(n2 + i2) != '\0')
		i2++;
	if (i1 >= i2)
		k = i1;
	else
		k = i2;
	if (size_r <= k + 1)
		return (0);
	r[k + 1] = '\0';
	i1--, i2--, size_r--;
	l1 = *(n1 + i1) - 48, l2 = *(n2 + i2) - 48;
	while (k >= 0)
	{
		j = l1 + l2 + m;
		if (j >= 10)
			m = j / 10;
		else
			m = 0;
		if (j > 0)
			*(r + k) = (j % 10) + 48;
		else
			*(r + k) = '0';
		if (i1 > 0)
			i1--, l1 = *(n1 + i1) - 48;
		else
			l1 = 0;
		if (i2 > 0)
			i2--, l2 = *(n2 + i2) - 48;
		else
			l2 = 0;
		k--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
