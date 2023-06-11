#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in an array.
  * @size: size of elements of an array.
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
	{
		*((char *)(n) + x) = 0;
	}

	return (n);
}
