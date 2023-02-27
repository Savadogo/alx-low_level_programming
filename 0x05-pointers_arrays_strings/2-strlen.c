#include "main.h"
/**
 * _strlen - calculate length of a string
 * @s: string to find the length
 * Return: n giving the size of the string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}

