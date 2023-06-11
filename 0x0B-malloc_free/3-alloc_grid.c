#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to an array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer of an array.
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		gridout[x] = malloc(width * sizeof(int));
		if (gridout[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(gridout[x]);
			free(gridout);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			gridout[x][y] = 0;

	return (gridout);
}
