#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @dest: string to add to
 * @src: strng to add
 */

char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	m = 0;
	while (*(dest + n) != '\0')
	{
		n++;
	}
	while (*(src + m) != '\0')
	{
		*(dest + n + m) = *(src + m);
		m++;
	}
	*(dest + n + m) = *(src + m);
	return (dest);
}

