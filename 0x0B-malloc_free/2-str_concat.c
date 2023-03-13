#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -s1, followed by the contents of s2, and null terminated
 * Return: a pointer to the allocated memory
 * @s1: first string
 * @s2: second string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, size1, size2;

	if (s1 == NULL)
	{
		size1 = 0;
	}
	else
	{
		size1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		size2 = 0;
	}
	else
	{
		size2 = strlen(s2);
	}
	a = malloc(size1 + size2  + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		a[i + size1] = s2[i];
	}
	return (a);
}
