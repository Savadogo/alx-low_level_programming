#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - This function compares two strings.
 * Return: Returns the number of bytes in the initial segment of s
 * @s: first string
 * @accept: second string
 */
char *_strpbrk(char *s, char *accept)
{
	int  n, m;
	char *pos = NULL;

	n = 0;
	while (*(s + n) != '\0' && pos == NULL)
	{
		m = 0;
		do {
			if (*(accept + m) == *(s + n))
			{
				pos = (s + n);
				break;
			}
			m++;
		} while (*(accept + m) != '\0');
		n++;
	}
	return (pos);
}

