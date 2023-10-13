#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the doubly linked list
 *
 * @idx: index of the new node to insert
 *
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed.
 *
 * If it's not possible to add the new node at index `idx`,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, len;
	dlistint_t *new_node, *curr, *prev;

	new_node = malloc(sizeof(dlistint_t));

	if (!h || !new_node)
		return (NULL);

	curr = *h;
	len = 0;
	while (curr)
	{
		curr = curr->next;
		++len;
	}

	if (idx >= len)
		return (NULL);

	new_node->n = n;
	curr = *h;
	i = 0;
	while (curr && i < len && i != idx)
	{
		prev = curr;
		curr = curr->next;
		++i;
	}
	if (idx == i && !idx)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		return (new_node);
	}
	new_node->next = prev->next;
	prev->next->prev = new_node;
	prev->next = new_node;
	new_node->prev = prev;
	return (new_node);
}
