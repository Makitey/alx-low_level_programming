#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int curnt;

	for (x = 63; x >= 0; x--)
	{
		curnt = n >> x;

		if (curnt & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
