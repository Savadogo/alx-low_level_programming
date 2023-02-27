#include "main.h"
/**
 * swap_int - swap two integer
 * @a: pointer of first integer
 * @b: pointer of the second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

