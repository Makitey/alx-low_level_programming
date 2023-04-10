#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array.
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int x, y, z, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	strout = malloc(sizeof(char) * (x + y + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (z = 0; z < x; z++)
		strout[z] = s1[z];

	limit = y;
	for (y = 0; y <= limit; z++, y++)
		strout[z] = s2[y];

	return (strout);
}
