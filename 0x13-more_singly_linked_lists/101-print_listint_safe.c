#include "lists.h"

/**
 * print_listint_safe - safely prints a linked list
 * @head: list of listint_t to print
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
