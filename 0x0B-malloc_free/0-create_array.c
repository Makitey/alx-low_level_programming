#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array.
 * @size: size of the array.
 * @c: storaged char
 * Return: pointer of an array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int n;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		cr[n] = c;

	return (ch);
}
