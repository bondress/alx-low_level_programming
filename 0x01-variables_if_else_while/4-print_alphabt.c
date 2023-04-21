#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Print the alphabet in lowercase,
 * (except q and e) followed by a new line."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

