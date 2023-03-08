#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - fucntion that print a string
 * @a: array to print
 * @size: size of the table
 */
void print_diagsums(int *a, int size)
{
	int i, diag1, diag2;

	diag1 = 0;
	diag2 = 0;
	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i * size + i];
		diag2 = diag2 + a[size * (1 + i) - i - 1];
	}
	printf("%i, %i\n", diag1, diag2);
}

