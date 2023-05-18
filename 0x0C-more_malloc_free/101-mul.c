#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * mv_print - moves a string to the left by one place
 * and prints it
 * @s: the string to be moved
 * @sz: the size of the string
 *
 * Return: void
 */
void mv_print(char *s, int sz)
{
	int a, b;

	a = b = 0;

	while (a < sz)
	{
		if (s[a] != '0')
			b = 1;
		if (a || b == sz - 1)
			_putchar(s[a]);
		a++;
	}

	_putchar('\n');
	free(s);
}

/**
 * check_num - checks to make sure the arguments are digits
 * @n: pointer to arguments
 *
 * Return: 1 if not a digit, 0 if digit
 */
int check_num(char **n)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; n[a][b]; b++)
		{
			if (n[a][b] < '0' || n[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * str_init - initializes a string
 * @s: string to be initialized
 * @len: lenght of string
 *
 * Return: void
 */
void str_init(char *s, int len)
{
	int a;

	for (a = 0; a < len; a++)
		s[a] = '0';
	s[a] = '\0';
}

/**
 * mulcn - multiplies a char with a string
 * @c: char to multiply
 * @s: string to multiply
 * @s_i: last non NULL index of s
 * @d: destination of multiplication
 * @d_i: highest index to start addition
 *
 * Return: NULL on failure or pointer to d
 */
char *mulcn(char c, char *s, int s_i, char *d, int d_i)
{
	int i, j, m, mrem, a, arem;

	mrem = arem = 0;

	for (i = s_i, j = d_i; i >= 0; i--, j--)
	{
		m = (c - '0') * (s[i] - '0') + mrem;
		mrem = m / 10;
		a = (d[j] - '0') + (m % 10) + arem;
		arem = a / 10;
		d[j] = a % 10 + '0';
	}
	for (arem += mrem; j >= 0 && arem; j--)
	{
		a = (d[j] - '0') + arem;
		arem = a / 10;
		d[j] = a % 10 + '0';
	}
	if (arem)
		return (NULL);

	return (d);
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int n1, n2, o, pi, i;
	char *c;
	char *p;
	char err[] = "Error\n";

	if (argc != 3 || check_num(argv))
	{
		for (pi = 0; err[pi]; pi++)
			_putchar(err[pi]);
		exit(98);
	}
	for (n1 = 0; argv[1][n1]; n1++)
		;
	for (n2 = 0; argv[2][n2]; n2++)
		;
	o = n1 + n2 + 1;
	c = malloc(o * sizeof(char));
	if (c == NULL)
	{
		for (pi = 0; err[pi]; pi++)
			_putchar(err[pi]);
		exit(98);
	}
	str_init(c, o - 1);
	for (pi = n2 - 1, i = 0; pi >= 0; pi--, i++)
	{
		p = mulcn(argv[2][pi], argv[1], n1 - 1, c, (o - 2) - i);
		if (p == NULL)
		{
			for (pi = 0; err[pi]; pi++)
				_putchar(err[pi]);
			free(c);
			exit(98);
		}
	}
	mv_print(c, o - 1);
	return (0);
}
