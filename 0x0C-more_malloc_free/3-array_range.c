#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates an array.
  *@min: minimum value.
  *@max: maximum value.
  *Return: pointer to the newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */

int *array_range(int min, int max)
{
	int range, x;
	int *n;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	n = malloc(range * sizeof(int));

	if (n == NULL)
		return (NULL);

	for (x = 0; x < range; x++)
	{
		*(n + x) = min + x;
	}

	return (n);
}
