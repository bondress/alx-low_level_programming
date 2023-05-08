#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: chessboard to be printed
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, w;

	for (b = 0; a[b][7]; b++)
	{
		for (w = 0; w < 8; w++)
			_putchar(a[b][w]);

		_putchar('\n');
	}
}
