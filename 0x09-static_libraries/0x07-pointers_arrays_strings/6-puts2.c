#include "main.h"
/**
 * puts2 - fucntion that print a string
 * @str: string to print
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		if (*(str + n + 1) == '\0')
		{
			break;
		}
		n = n + 2;
	}
	_putchar('\n');
}

