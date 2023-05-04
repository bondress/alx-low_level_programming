#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @s:  string to be encoded.
 *
 * Return: encoded string @s
 */
char *leet(char *s)
{
	int i1 = 0, i2;
	char code[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (s[i1] == code[i2] ||
					s[i1] - 32 == code[i2])
				s[i1] = i2 + '0';
		}

		i1++;
	}

	return (s);
}
