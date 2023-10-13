#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: dlistint_t double pointer - head of doubly linked list
 *
 * @idx: unsigned int - index to insert to new node to
 *
 * @n: int - data of node to insert
 *
 * Return: the address of the new node or NULL
 *
 * If it is not possible to add the new node at index idx, do not add the node
 * and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index;
	dlistint_t *new_node, *curr, *prev;

	new_node = malloc(sizeof(dlistint_t));

	if (!h || !new_node)
		return (NULL);
	if (!*h && idx)
		return (NULL);

	new_node->n = n;
	if (!idx)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	for (index = 0, curr = *h; curr && index != idx; index++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (idx != index)
		return (NULL);
	if (!curr && idx == index)
	{
		new_node->next = NULL;
		new_node->prev = prev;
		prev->next = new_node;
		return (new_node);
	}

	new_node->next = curr;
	new_node->prev = curr->prev;
	curr->prev->next = new_node;
	curr->prev = new_node;
	return (new_node);
}
