#include "main.h"
/**
 * _strspn - This function compares two strings.
 * Return: Returns the number of bytes in the initial segment of s
 * @s: first string
 * @accept: second string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g, n, m, ts;

	n = 0;
	g = 0;
	ts = 1;
	while (*(s + n) != '\0')
	{
		m = 0;
		do {
			ts = 1;
			if (*(accept + m) == *(s + n))
			{
				ts = 0;
				g++;
				break;
			}
			m++;
		} while (*(accept + m) != '\0');
		if (g != 0 && ts == 1)
		{
			break;
		}
		n++;
	}
	return (g);
}

