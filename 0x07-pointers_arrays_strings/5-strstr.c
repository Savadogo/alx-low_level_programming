#include "main.h"
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

	while (*(s + n) != '\0')
	{
		m = 0;
		do {
			ts = 1;
			if (*(accept + m) == *(s + n + m))
			{
				ts = 0;
			}
			m++;
		} while (*(accept + m) != '\0' && ts == 0 && *(s + n + m) != '\0');
		if (*(accept + m) == '\0')
		{
			pos == (s + n - m);
			break;
		}
		n++;
	}
	return (pos);
}

