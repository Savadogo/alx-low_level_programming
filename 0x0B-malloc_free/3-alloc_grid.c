#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimension array of integers
 * Return: a pointer to the allocated memory
 * @width: the width
 * @height: the heigth
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	a = malloc((width * height) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(a + i * width + j) = 0;
		}
	}
	return (a);
}
