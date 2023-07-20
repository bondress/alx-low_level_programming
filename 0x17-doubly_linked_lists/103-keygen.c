#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates and prints pwds for the crackme5 executable.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pwd[7], *codex;
	int len = strlen(argv[1]), i, tem;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tem = (len ^ 59) & 63;
	pwd[0] = codex[tem];

	tem = 0;
	for (i = 0; i < len; i++)
		tem += argv[1][i];
	pwd[1] = codex[(tem ^ 79) & 63];

	tem = 1;
	for (i = 0; i < len; i++)
		tem *= argv[1][i];
	pwd[2] = codex[(tem ^ 85) & 63];

	tem = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tem)
			tem = argv[1][i];
	}
	srand(tem ^ 14);
	pwd[3] = codex[rand() & 63];

	tem = 0;
	for (i = 0; i < len; i++)
		tem += (argv[1][i] * argv[1][i]);
	pwd[4] = codex[(tem ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tem = rand();
	pwd[5] = codex[(tem ^ 229) & 63];

	pwd[6] = '\0';
	printf("%s", pwd);
	return (0);
}
