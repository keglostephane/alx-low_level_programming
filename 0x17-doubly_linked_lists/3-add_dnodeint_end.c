#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * @n: new node value
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;

		new_node->prev = curr;
		curr->next = new_node;
	}

	return (new_node);
}
