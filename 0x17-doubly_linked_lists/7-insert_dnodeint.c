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
	unsigned int index = 0;
	dlistint_t *new_node, *node, *prev;

	prev = NULL;
	node = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	while (node)
	{
		if (index == idx)
		{
			prev = node->prev;
			break;
		}
		node = node->next;
		index++;
	}
	if (!node && idx != 0)
		return (NULL);
	if (index != idx)
		return (NULL);
	if (!idx)
	{
		new_node->next = node;
		new_node->prev = NULL;
		if (node)
			node->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	new_node->next = prev->next;
	prev->next->prev = new_node;
	new_node->prev = prev;
	prev->next = new_node;
	return (new_node);
}
