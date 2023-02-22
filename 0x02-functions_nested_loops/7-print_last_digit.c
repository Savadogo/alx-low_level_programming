#include "main.h"
/**
 * print_last_digit - function that give the last digit
 * Return: the last digit
 * @n: integer to test
 */

int print_last_digit(int n)
{
	_putchar ((n % 10) + '0');
	return (n % 10);
}

