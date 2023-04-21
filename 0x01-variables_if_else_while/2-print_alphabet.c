#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Print the alphabet in lowercase, followed by a new line."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
