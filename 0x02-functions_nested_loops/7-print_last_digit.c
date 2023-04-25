#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number whose last digit will be printed.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int ld = (n % 10);

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
