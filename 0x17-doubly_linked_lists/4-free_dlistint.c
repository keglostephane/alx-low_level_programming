#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t doubly linked list
 *
 * @head: head of the doubly linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
