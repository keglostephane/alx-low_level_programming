#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head: a pointer to the head of the linked list
 *
 * @n: integer value of the node
 *
 * Return: the address of the new node or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;

	if (!*head)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}

	node->next = *head;
	*head = node;

	return (*head);
}
