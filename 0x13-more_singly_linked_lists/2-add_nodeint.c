#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: Address of the first node
 * @n: Integer to insert
 * Return: Address of a new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	pt = malloc(sizeof(listint_t));
	if (pt == NULL)
		return (NULL);

	pt->n = n;
	pt->next = *head;
	*head = pt;
	return (*head);
}
