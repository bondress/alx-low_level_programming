#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Print the lowercase alphabet in reverse,
 * followed by a new line."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
