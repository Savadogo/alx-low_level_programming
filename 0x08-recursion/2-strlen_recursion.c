#include "main.h"
/**
 * _strlen_recursion - Recursive function to return string length
 * @s: string to find length
 * Return: length of string
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return(_strlen_recursion(s) + 1);
}
