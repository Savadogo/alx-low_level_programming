#include "main.h"
/**
 * _memcpy - This function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @s: char where to copy
 * @b: char to copy
 * @n: n bytes where to cpy src
 */

char *_memcpy(char *s, char b, unsigned int n)
{
	while (n >= 0)
	{
		*(s + n) = b;
		n--;
	}
	return (s);
}

