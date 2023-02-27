#include "main.h"
/**
 * _print_rev - fucntion that print a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, n;

	n = _strlen(*s);
	for (i=0; i < n; i++)
	{
		_putchar(*(str + n - i - 1));
		i++;
	}
	_putchar('\n');
}

