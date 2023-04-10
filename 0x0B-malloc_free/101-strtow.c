#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: 2 dimensional array of char.
 * @height: height of the array.
 * Return: no return
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 * Return: pointer of an array
 */

char **strtow(char *str)
{
	char **aout;
	unsigned int x, height, y, z, a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
	{
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			height++;
	}
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (y = a = 0; y < height; y++)
	{
		for (x = a; str[x] != '\0'; x++)
		{
			if (str[x] == ' ')
				a++;
			if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			{
				aout[y] = malloc((x - a + 2) * sizeof(char));
				if (aout[y] == NULL)
				{
					ch_free_grid(aout, y);
					return (NULL);
				}
				break;
			}
		}
		for (z = 0; a <= x; a++, z++)
			aout[y][z] = str[a];
		aout[y][z] = '\0';
	}
	aout[y] = NULL;
	return (aout);
}
