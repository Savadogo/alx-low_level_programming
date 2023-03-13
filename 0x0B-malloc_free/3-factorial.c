#include "main.h"
/**
 * factorial - Recursive function to calculate factorial
 * @n: number to return the factorial
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
