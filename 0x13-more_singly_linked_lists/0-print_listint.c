#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of the linked list
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *pt;
	unsigned int ctr = 0;

	pt = h;
	while (pt)
	{
		printf("%d\n", pt->n);
		ctr++;
		pt = pt->next;
	}
	return (ctr);
}
