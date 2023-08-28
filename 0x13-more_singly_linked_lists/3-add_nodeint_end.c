#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 *
 * @head: pointer to the head of the linked list
 *
 * @n: integer value of the node
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;
	listint_t *node, *prev_node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (*head);
	}

	prev_node = *head;

	for (i = 0; prev_node->next != NULL; i++)
		prev_node = prev_node->next;

	prev_node->next = node;

	return (*head);
}
