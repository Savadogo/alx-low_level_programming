#include "main.h"
/**
 * _puts_recursion - Recursive function to print a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');
		return;
	}
	s++;
	_puts_recursion(s);
}
