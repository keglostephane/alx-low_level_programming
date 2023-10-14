#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index `index
 *
 * @head: head of the doubly linked list
 *
 * @index: index of the node to delete
 *
 * Return: 1 if it succeed, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *prev, *next, *curr;

	if (!head || !*head)
		return (-1);

	for (i = 0, curr = *head; curr && i != index; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (index == i)
	{
		if (!index)
		{
			next = (*head)->next;
			if (next)
				next->prev = NULL;
			free(*head);
			*head = next;
		}
		else
		{
			next = prev->next->next;
			if (next)
				next->prev = prev;
			free(prev->next);
			prev->next = next;
		}
		return (1);
	}
	return (-1);
}
