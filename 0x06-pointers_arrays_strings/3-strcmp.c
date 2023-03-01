#include "main.h"
/**
 * _strcmp - This function compares two strings.
 * Return: a integer giving the gap between strings
 * @s1: first string
 * @S2: second string
 */
int _strcmp(char *s1, char *s2)
{
	int n, g;

	n = 0;
	g = 0;
	while (*(s1 + n) != '\0' && *(s2 + n) != '\0')
	{
		g = *(s1 + n) - *(s2 + n);
		if (g != 0)
		{
			break;
		}
		n++;
	}
	return (g);
}

