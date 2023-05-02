#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a linked list
 * @head: Pointer to a list
 * Return: Integer in success
 **/

int pop_listint(listint_t **head)
{
	listint_t *pt;
	int my_data;

	if (*head == NULL)
		return (0);

	pt = *head;
	*head = pt->next;
	my_data = pt->n;
	free(pt);
	return (my_data);
}
