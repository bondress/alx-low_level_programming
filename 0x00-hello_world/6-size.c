#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cType;
	int iType;
	long lType;
	long long llType;
	float fType;

	printf("Size of a char: %ld byte(s)\n", sizeof(cType));
	printf("Size of an int: %ld byte(s)\n", sizeof(iType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llType));
	printf("Size of a float: %ld byte(s)\n", sizeof(fType));
	return (0);
}
