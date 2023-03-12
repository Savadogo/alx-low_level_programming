#include "main.h"
#include <stdio.h>
/**
 * _puts - fucntion that print a string
 * @str: string to print
 */
void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		putchar(*(str + n));
		n++;
	}
	putchar('\n');
}
