#include "main.h"
/**
 * print_square - Print a square with a number of characters
 * @n : number of caracter to use
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

