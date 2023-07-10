#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d array
 * @height: the height of the array
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
