#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - it sets the value of a bit to 0
 * @n: parameter
 * @index: index
 * Return: 1 if correct and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
