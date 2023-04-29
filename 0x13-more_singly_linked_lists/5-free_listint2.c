#include "lists.h"

/**
 * free_listint2 - free list2
 * @head : pointer list
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;
	free_listint(*head);
}
