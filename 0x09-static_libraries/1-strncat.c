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
		m++;
	}
	if (m < n)
	{
		n = m;
	}
	for (m = 0; m < n; m++)
	{
		*(dest + i + m) = *(src + m);
	}
	return (dest);
}

