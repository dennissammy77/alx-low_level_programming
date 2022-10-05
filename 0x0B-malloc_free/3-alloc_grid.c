#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2-d array.
 * @width: width of array.
 * @length: length pf array.
 * Retrun: pointer of array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x,y;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (x = 0;x < height;x++)
	{
		for (y= 0;y < width;y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
