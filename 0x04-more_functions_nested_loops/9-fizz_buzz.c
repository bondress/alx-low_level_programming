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
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		} else if (n % 5 == 0)
		{
			if (n == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else
			printf("%d ", n);
	}
	return (0);
}
