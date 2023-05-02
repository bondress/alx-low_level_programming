#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char pwd[84];
	int i = 0, sum = 0, dh1, dh2;

	srand(time(0));

	while (sum < 2772)
	{
		pwd[i] = 33 + rand() % 94;
		sum += pwd[i++];
	}
	pwd[i] = '\0';
	if (sum != 2772)
	{
		dh1 = (sum - 2772) / 2;
		dh2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dh1++;
		for (i = 0; pwd[i]; i++)
		{
			if (pwd[i] >= (33 + dh1))
			{
				pwd[i] -= dh1;
				break;
			}
		}
		for (i = 0; pwd[i]; i++)
		{
			if (pwd[i] >= (33 + dh2))
			{
				pwd[i] -= dh2;
				break;
			}
		}
	}
	printf("%s", pwd);
	return (0);
}
