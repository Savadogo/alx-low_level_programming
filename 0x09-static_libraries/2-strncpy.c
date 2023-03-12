#include "main.h"
/**
 * _strncpy - This function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @dest: string to add to
 * @src: strng to add
 * @n: number of caracter to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (*(src + m) != '\0' && m < n)
	{
		*(dest + m) = *(src + m);
		m++;
	}
	for ( ; m < n; m++)
	{
		*(dest + m) = '\0';
	}
	return (dest);
}

