#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator
 * @separator: The string separator
 * @n: Quantity of numbers
 * @...: List of numbers
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int x;
char *p;

va_start(valist, n);

for (x = 0; x < n; x++)
{
if (separator != NULL && x != 0)
printf("%s", separator);
p = va_arg(valist, char *);
printf("%s", (p == NULL) ? "(nil)" : p);
}
printf("\n");
va_end(valist);
}
