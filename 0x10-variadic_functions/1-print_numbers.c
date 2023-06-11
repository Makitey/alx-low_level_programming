#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of elements
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int x;

va_start(ap, n);

for (x = 0; x < n; x++)
{
printf("%d", va_arg(ap, int));

if (separator != NULL && x != (n - 1))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(ap);
}
