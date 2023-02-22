#include "main.h"
/**
 * print_last_digit - function that give the last digit
 * Return: the last digit
 * @n: integer to test
 */

int print_last_digit(int n)
{
	int r;
	r = n % 10;
	if (r < 0)
	{
		r = -r;
	}
	_putchar (r + '0');
	return (r);
}

