#include "main.h"
#include <stdio.h>
/**
 * _strchr - calculate length of a string
 * @s: string to look up
 * @c: char to find
 * Return: position where the char is
 */
char *_strchr(char *s, char c)
{
	char *pos = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			pos = s;
			break;
		}
		s++;
	}
	if (*s == c)
	{
		pos = s;
	}
	return (pos);
}
