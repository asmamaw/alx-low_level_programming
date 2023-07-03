#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * print_chessboard - function that prints the chessboard.
 *@a: first value -char
 *_putchar - a function that prints char
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_puchar('\n');
	}
}
