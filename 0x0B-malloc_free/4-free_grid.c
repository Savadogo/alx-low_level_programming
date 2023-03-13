#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - free a 2 dimension array of integers
 * @grid: grid to free²:wq
 * @height: the heigth
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
