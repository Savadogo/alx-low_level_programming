#include "main.h"
/**
 * helper - checking that there is a square root
 * @n: number to calculate square root
 * @i: start looking here
 * Return: the square root
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (helper(n, i + 1));
}
/**
 * _sqrt_recursion - Recursive function to calculate the root of number
 * @n: number to calculate square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (helper(n, 1));
}
