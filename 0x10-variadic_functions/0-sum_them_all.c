#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all the parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (x = 0; x < n; x++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
