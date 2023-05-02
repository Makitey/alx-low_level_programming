#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node
 * @head: Address of first node
 * @index: Position of the node to delete
 * Return: 1 if success
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *curnt, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	curnt = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (curnt->next == NULL)
			return (-1);
		curnt = curnt->next;
	}
	next = curnt->next;
	curnt->next = next->next;
	free(next);
	return (1);
}
