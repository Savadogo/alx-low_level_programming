#include "main.h"
/**
 * _print_rev_recursion - Recursive function to print a string
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		return (_puts_recursion(s + 1));
	}
	_putchar(*s);
	_puts_recursion(s - 1);
}
