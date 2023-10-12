#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * @index: index of the node to search
 *
 * Return: the node at index `index`
 * If the node does not exist, return NULL
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n, i;
	dlistint_t *curr;

	if (!head)
		return (NULL);

	curr = head;
	n = 0;
	while (curr)
	{
		curr = curr->next;
		n++;
	}

	curr = head;
	i = 0;
	while (curr && i < n && i != index)
	{
		curr = curr->next;
		++i;
	}

	if (index == i)
		return (curr);

	return (NULL);
}
