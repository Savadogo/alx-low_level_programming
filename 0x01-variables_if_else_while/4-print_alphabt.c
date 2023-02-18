#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print sign of number
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ('a' + i != 'q' && 'a' + i != 'e')
		{
			putchar('a' + i);
		}
	}
	putchar('\n');
	return (0);
}
