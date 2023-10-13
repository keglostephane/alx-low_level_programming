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
	unsigned int len, index;
	dlistint_t *new_node, *node, *prev;

	new_node = malloc(sizeof(dlistint_t));
	if (!h || !new_node)
		return (NULL);
	if (!*h && idx)
		return (NULL);

	new_node->n = n;
	for (node = *h, len = 0; node; len++)
		node = node->next;

	for (node = *h, index = 0; node && index < len && index != idx; index++)
	{
		prev = node;
		node = node->next;
	}
	if (!idx)
	{
		new_node->prev = NULL;
		new_node->next = node;
		if (node)
			node->prev = new_node;
		*h = new_node;
	}
	if (len && idx == len)
	{
		new_node->next = NULL;
		new_node->prev = prev;
		prev->next = new_node;
	}
	if (idx == index)
	{
		new_node->next = prev->next;
		new_node->prev = prev;
		prev->next->prev = new_node;
		prev->next = new_node;
	}
	return (new_node);
}
