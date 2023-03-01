#include "main.h"
#include <stdio.h>
/**
 * print_array - fucntion that print a string
 * @a: array to print
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}

	printf("\n");
}

