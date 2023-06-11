#include "lists.h"

/**
 * listint_len - Calculates the number of elements
 * @h: Pointer
 * Return: Integer
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *pt;
	unsigned int ctr = 0;

	pt = h;
	while (pt)
	{
		ctr++;
		pt = pt->next;
	}
	return (ctr);
}
