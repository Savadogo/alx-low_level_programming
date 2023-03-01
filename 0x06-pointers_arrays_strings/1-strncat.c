#include "main.h"
/**
 * _strncat - This function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @dest: string to add to
 * @src: strng to add
 * @n: number of caracter to copy
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	i = 0;
	m = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + m) != '\0')
	{
		*(dest + n + m) = *(src + m);
		m++;
	}
	if (i < n)
	{
		n = i;
	}
	for (i = 0; i < n; i++)
	{
		*(dest + n + m) = *(src + m);
	}
	return (dest);
}

