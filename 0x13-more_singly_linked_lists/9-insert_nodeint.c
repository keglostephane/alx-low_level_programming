#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - retuns the number of elements in a linked list
 *
 * @h: head of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int i;
	size_t c;

	if (!h)
		return (0);

	for (i = 0, c = 0; h != NULL; i++, c++, h = h->next)
		;

	return (c);
}

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

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to head of the linked list
 *
 * @idx: index in the list where to insert the new node (index starts at 0)
 *
 * @n: node data
 *
 * Return: the address of the new node or NULL if it failed
 *
 * If it is not possible to add the new node at index `idx`,
 * do not add the node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len;
	listint_t *new_node, *node, *prev_node;

	len = listint_len(*head);
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx >= len || !*head)
		return (NULL);
	else if (*head && !idx)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (idx == i)
			{
				prev_node = get_nodeint_at_index(*head, i - 1);
				node = get_nodeint_at_index(*head, i);
				prev_node->next = new_node;
				new_node->next = node;
			}
		}
	}
	return (new_node);
}
