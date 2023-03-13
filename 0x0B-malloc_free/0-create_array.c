#include "main.h"
/**
 * _create_array-creates an array of chars,initializes it with a specific char
 * Return: a pointer to the resulting array
 * @size: array size
 * @c: char to initializes with
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
