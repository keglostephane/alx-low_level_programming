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
 * delete_nodeint_at_index - deletes the node at a given index
 *
 * @head: pointer to the head of the linked list
 *
 * @index: index of the node to delete
 *
 * Return: 1 in success, -1 in failure;
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len;
	listint_t *prev_node, *next_node, *node;

	len = listint_len(*head);

	if (!len)
		return (-1);
	if (len && index >= len)
		return (-1);

	if (!index)
	{
		next_node = get_nodeint_at_index(*head, 1);
		free(*head);
		*head = next_node;
	}
	else
	{
		prev_node = get_nodeint_at_index(*head, index - 1);
		node = get_nodeint_at_index(*head, index);
		next_node = get_nodeint_at_index(*head, index + 1);
		prev_node->next = next_node;
		free(node);
	}

	return (1);
}
