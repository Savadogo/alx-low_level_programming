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
	while (*(s + n) != '\0')
	{
		m = 0;
		ts = 1;
		do {
			while (*(accept + m) != '\0')
			{
				if (*(accept + m) == *(s + n))
				{
					ts = 0;
					g++;
					break;
				}
				m++;
			}
		n++;
		} while (ts == 0);
		if (g != 0)
		{
			break;
		}
	}
	return (g);
}

