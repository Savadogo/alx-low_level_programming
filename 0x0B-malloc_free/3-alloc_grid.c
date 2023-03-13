#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimension array of integers
 * Return: a pointer to the allocated memory
 * @width: the width
 * @height: the heigth
 */

int **alloc_grid(int width, int height)
{
	int **a = malloc(height * sizeof(int *));
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	return (a);
}
