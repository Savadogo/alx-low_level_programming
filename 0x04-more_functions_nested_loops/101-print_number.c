#include "main.h"
/**
 * print_number - Print a number
 * @n : number to print
 */

void print_number(int n)
{
	int i, m;

	m = 0;
	while (n / (10 ^ m) > 1)
	{
		m++;
	}

	for (i = 0; i < m; i++)
	{
		_putchar('0' + (n % 10 ^ (m - i)) / (10 ^ (m - i)));
	}
	_putchar('0' + n % (10 ^ m));
	_putchar('\n');
}

