#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free memory of two dimension array
 * @grid: the array
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
