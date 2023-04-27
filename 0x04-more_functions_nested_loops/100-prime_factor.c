#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143, div = 2, lpf;

	while (num != 0)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			lpf = num;
			num = num / div;
			if (num == 1)
			{
				printf("%ld", lpf);
				printf("\n");
				break;
			}
		}
	}
	return (0);
}
