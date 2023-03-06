#include "main.h"
/**
 * _strchr - calculate length of a string
 * @s: string to look up
 * @c: char to find
 * Return: position where the char is
 */
char *_strchr(char *s, char c)
{
	int n;
	char *pos;
	pos = NULL;

	n = 0;
	while (*(s + n) != '\0')
	{
		if(*(s + n) != c)
		{
			pos = (s + n);
			break;
		}
		n++;
	}
	return (pos);
}

