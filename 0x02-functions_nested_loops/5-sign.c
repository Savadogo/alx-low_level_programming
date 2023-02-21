#include "main.h"
/**
 * _print_sign - function that print sign of a number
 * Return: the sign of the number
 * @n: integer to test
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar ('+');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar ('-');
	}
	else
	{
		r = 0;
		_putchar ('0');
	}
	return (r);
}

