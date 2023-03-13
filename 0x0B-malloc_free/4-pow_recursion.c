#include "main.h"
/**
 * _pow_recursion - Recursive function to calculate power of number
 * @x: number to power
 * @y: number for power
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
