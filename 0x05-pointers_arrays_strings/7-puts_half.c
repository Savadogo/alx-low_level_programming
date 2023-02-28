#include "main.h"
/**
 * puts_half - fucntion that print a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int n, m;

	n = 0;
	while (*(str + n) != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		m = n / 2;
	}
	else
	{
		m = (n - 1) / 2;
	}
	while (m < n)
	{
		_putchar(*(str + m));
		m++;
	}

	_putchar('\n');
}

