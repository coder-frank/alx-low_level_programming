#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d array
 * @height: the height of the array
*/
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	for (int i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
