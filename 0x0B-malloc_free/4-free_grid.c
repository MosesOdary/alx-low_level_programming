#include "main.h"

/**
* free_grid - frees a 2 dimensional array.
*
* @grid: pointer to 2D array
* @height: number of array elements
*/

void free_grid(int **grid, int height)
{
	if (grid || height)
	{
		while (height--)
			free(grid[height]);

		free(grid);
	}
}
