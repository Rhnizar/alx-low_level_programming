#include "lists.h"

/**
 * free_listint - free list
 * @head : list
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
