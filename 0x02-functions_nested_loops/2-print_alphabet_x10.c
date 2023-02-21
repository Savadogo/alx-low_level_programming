#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar('a' + i);
		}
		_putchar('\n');
	}
}

