#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t double pointer - head of doubly linked list
 * @idx: unsigned int - index to insert to new node to
 * @n: int - data of node to insert
 *
 * Return: the address of the new node or NULL
 *
 * If it is not possible to add the new node at index idx, do not add the node
 * and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0, i = 0;
	dlistint_t *new_node, *curr, *prev;

	new_node = malloc(sizeof(dlistint_t));
	if (!h || !new_node)
		return (NULL);

	curr = *h;
	while (curr)
	{
		curr = curr->next;
		++len;
	}

	new_node->n = n;
	curr = *h;
	while (curr && i < len && i != idx)
	{
		prev = curr;
		curr = curr->next;
		++i;
	}
	if (!idx)
	{
		new_node->prev = NULL;
		new_node->next = curr;
		if (curr)
			curr->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	new_node->next = prev->next;
	prev->next->prev = new_node;
	prev->next = new_node;
	new_node->prev = prev;
	return (new_node);
}
