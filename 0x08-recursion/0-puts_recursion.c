#include "main.h"
/**
 * _puts_recursion - Recursive function to print a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
	_putchar('\0');
}

