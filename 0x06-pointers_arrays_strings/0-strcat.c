#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @dest: string to add to
 * @src: strng to add
 */

char *_strcat(char *dest, char *src)
{
	int n, m, i;

	n = 0;
	m = 0;
	while (*(dest + n) != '\0')
	{
		n++;
	}
	while (*(src + m) != '\0')
	{
		m++;
	}
	for (i = 0; i <= m; i++)
	{
		*(dest + n + i + 1) = *(src + i);
	}
	return (dest);
}

