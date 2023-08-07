/**
 * free_grid - Frees memory for 2D grid
 * @grid: 2D array
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return (NULL);

	while (i < height)
	{
		free(grid[i]);
	}
}
