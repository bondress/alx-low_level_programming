#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: string to be encoded.
 *
 * Return: encoded string @s
 */
char *rot13(char *s)
{
	int i = 0, j;
	char letts[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
		'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letts[j])
			{
				s[i] = key[j];
				break;
			}
		}

		i++;
	}

	return (s);
}
