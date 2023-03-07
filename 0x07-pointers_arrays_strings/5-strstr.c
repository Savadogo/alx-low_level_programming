#include "main.h"
#include <stdio.h>
/**
 * _strstr - This function compares two strings.
 * Return: Returns the number of bytes in the initial segment of s
 * @haystack: first string
 * @needle: second string
 */
char *_strstr(char *haystack, char *needle)
{
	char *pos = NULL;
	int ts, m, n;

	n = 0;
	while (*(haystack + n) != '\0')
	{
		m = 0;
		do {
			ts = 1;
			if (*(needle + m) == *(haystack + n + m))
			{
				ts = 0;
			}
			m++;
		} while (*(needle + m) != '\0' && ts == 0 && *(haystack + n + m) != '\0');
		if (*(needle + m) == '\0')
		{
			pos = (haystack + n);
			break;
		}
		n++;
	}
	return (pos);
}

