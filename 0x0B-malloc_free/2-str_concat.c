#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _str_concat -s1, followed by the contents of s2, and null terminated
 * Return: a pointer to the allocated memory
 * @s1: first string
 * @s2: second string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i;

	if (s1 == NULL)
	{
		*s1 = "";
	}
	if (s2 == NULL)
	{
		*s2 == "";
	}
	a = malloc(strlen(s1) +strlen(s2)  + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		a[i] = str[i];
	}
	for (i = 0; i < strlen(s2); i++)
	{
		a[i + strlen(s1)] = s2[i];
	}
	return (a);
}
