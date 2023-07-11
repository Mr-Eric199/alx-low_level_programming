#include <stdlib.h>
/**
 * free_grid- alloc
 * @grid: int
 * @height: int
 * Return: return void
 */
void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
