#include <stdlib.h>

/**
  * malloc_checked - allocates memory by malloc.
  * @b: size of memory to be allocated.
  * Return: pointer to allocated memory.
  */

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
