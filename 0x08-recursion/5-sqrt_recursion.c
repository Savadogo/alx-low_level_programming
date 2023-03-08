#include "main.h"
/**
 * _sqrt_recursion - Recursive function to calculate the root of number
 * @n: number to calculate square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if ((_sqrt_recursion(n / 2) * 2) * (_sqrt_recursion(n / 2) * 2) == n)
	{
		return (_sqrt_recursion(n / 2) * 2);
	}
	if ((_sqrt_recursion(n / 2) * 2 - 1) * (_sqrt_recursion(n / 2) * 2 - 1) == n)
	{
		return (_sqrt_recursion(n / 2) * 2 - 1);
	}
}
