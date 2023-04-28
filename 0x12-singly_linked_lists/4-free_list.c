#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this frees the linked list
 * @head: list_t list there to be free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
