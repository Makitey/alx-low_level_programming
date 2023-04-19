#include "function_pointers.h"

/**
 * array_iterator - execute function on each element of an array
 * @array: given array
 * @size: size of an array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int x;

if (array == NULL || action == NULL)
return;

for (x = 0; x < (int) size; x++)
{
action(array[x]);
}
}
