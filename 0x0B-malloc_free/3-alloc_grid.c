#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Creates a two dimensional array of integers.
 * @width: Array width.
 * @height: Array height.
 *
 * Return: Pointer to the array.
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **array_2D;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2D = (int **)malloc(height * sizeof(int *));

	if (array_2D == NULL)
		return (NULL);

	while (i < height)
	{
		array_2D[i] = (int *)malloc(width * sizeof(int));
		if (array_2D[i] == NULL)
		{
			while (j < i)
			{
				free(array_2D[j]);
				j++;
			}
			free(array_2D);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			array_2D[i][j] = 0;
			j++;
		}
		i++;
	}

	return (array_2D);
}
