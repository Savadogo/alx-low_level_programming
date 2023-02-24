#include <stdio.h>
#include "main.h"
/**
 * main - Print a fuzz buzz function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	_putchar('\n');
	return (0);
}

