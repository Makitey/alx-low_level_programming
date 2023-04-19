#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of an array
 * @cmp: function pointer
 * Return: count of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);

for (x = 0; x < size; x++)
{
if (cmp(array[x]) == 1)
return (x);
}
return (-1);
}
