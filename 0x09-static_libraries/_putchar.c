#include "main.h"
#include <unistd.h>
/**
 * _putchar - used to write char "d" to stdot
 * @c: The character to be print
 * Return: 1 in success & error on -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
