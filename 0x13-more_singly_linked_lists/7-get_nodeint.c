#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: head of the linked list
 *
 * @index: index of the node to search (starting at 0)
 *
 * Return: a pointer to the node at the specified index
 *
 * If the node does not exist, return NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;

	for (i = 0; node != NULL; node = node->next, i++)
		if (index == i)
			return (node);

	return (node);
}
