#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - fucntion that print a string
 * @a: array to print
 */
void print_diagsums(int *a, int size)
{
	int i, diag1, diag2;

	diag1 = 0;
	diag2 = 0;
	for (i = 0; i < size; i++)
	{
		diag1 += *(*(a + i) + i);
		diag2 += *(*(a + size - i - 1) + i size - i - 1);
	}
	printf("%i, %i", diag1, diag2);
}

