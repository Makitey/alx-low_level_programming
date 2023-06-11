#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end
 * @head: Address of the first node
 * @n: Integer to insert into the new node
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tmp2;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	tmp2 = *head;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	return (tmp);
}
