#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in the list
 * @head: Address of the first node
 * @index: Position of a the node to find
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
