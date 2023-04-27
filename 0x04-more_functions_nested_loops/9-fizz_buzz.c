#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * For multiples of three print "Fizz" instead of the number.
 * For multiples of five, print "Buzz" instead of hte number.
 * For numbers which are multiples of both three and five,
 * print "FizzBuzz"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("%s ", "Fizz");
		} else if (n % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
			printf("%d ", n);
	}
	putchar('\n');
	return (0);
}
