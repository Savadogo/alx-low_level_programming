#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - function to go to 98 from an input number
 * @n: input integer
 */

void print_to_98(int n)
{
	do {
		printf(n);
		if (n < 98)
		{
			n++;
			printf(", ");
		}
		else if (n > 98)
		{
			n--;
			printf(", ");
		}
	} while (n != 98)
}

