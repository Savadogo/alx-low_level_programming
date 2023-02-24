#include "main.h"
/**
 * print_triangle - Print a trinagle with a number of characters
 * @size : number of caracter to use
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = size - i - 1; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

