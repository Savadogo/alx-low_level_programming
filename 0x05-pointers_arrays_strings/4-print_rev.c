#include "main.h"
/**
 * print_rev - fucntion that print a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (*(n + s) != '\n')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(*(s + n - i - 1));
		i++;
	}
	_putchar('\n');
}

