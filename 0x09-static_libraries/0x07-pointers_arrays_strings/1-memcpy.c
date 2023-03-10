#include "main.h"
/**
 * _memcpy - This function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @dest: string to add to
 * @src: strng to add
 * @n: number of caracter to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		*(dest + m) = *(src + m);
	}
	return (dest);
}

