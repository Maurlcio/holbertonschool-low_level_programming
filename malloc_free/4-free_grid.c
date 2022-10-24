#include "main.h"

/**
*free_grid - frees a 2 dimensional grid
*@grid: grid
*@height: yup
*/

void free_grid(int **grid, int height)
{
int a;

if (grid == NULL || height <= 0)
{
return;
}
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
