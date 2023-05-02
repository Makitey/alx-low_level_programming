#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum of all the data in the list
 * @head: Address of the first node
 * Return: Integer
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
