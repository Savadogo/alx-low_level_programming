#include "main.h"
/**
 * print_chessboard - fucntion that print a string
 * @a: array to print
 */
void print_chessboard(int (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0;j  < 8; j++)
		{
			_putchar(*(*(a + i) + j));
			j++;
		}
		i++;
	}
}

