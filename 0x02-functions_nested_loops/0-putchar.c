#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Print sign of number
 * Return: 0
 */

int main(void)
{
	char to_print[] = "_putchar";
	unsigned int i;

	for (i = 0; i < strlen(to_print) ; i++)
	{
		putchar(to_print[i]);
	}
	putchar('\n');
	return (0);
}
