#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int x, y, z, i;

	if (ac == 0)
	{
		return (NULL);
	}
	for (x = y = 0; y < ac; y++)
	{
		if (av[y] == NULL)
			return (NULL);

		for (z = 0; av[y][z] != '\0'; z++)
			x++;
		x++;
	}

	aout = malloc((x + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (y = z = i = 0; i < x; z++, i++)
	{
		if (av[y][z] == '\0')
		{
			aout[i] = '\n';
			y++;
			i++;
			z = 0;
		}
		if (i < x - 1)
			aout[i] = av[y][z];
	}
	aout[i] = '\0';

	return (aout);
}
