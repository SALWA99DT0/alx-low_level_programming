#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_grid - free 2 Dimensional array
*@grid: 2 Dimensional grid
*@height: height dimension of grid
*Return: Nothing.
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

