#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program.
 * @ac: number of arguments passed to the program.
 * @av: an array of pointers to the arguents
 *
 * Return: NULL if ac == 0, av == NULL or function fails.
 * Otherwise return a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int a, b, n, s = ac;

	if (av == NULL || ac == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s++;
	}

	new_str = malloc(sizeof(char) + s + 1);

	if (new_str == NULL)
		return (NULL);

	n = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			new_str[n++] = av[a][b];

		new_str[n++] = '\n';
	}

	new_str[s] = '\0';

	return (new_str);
}
