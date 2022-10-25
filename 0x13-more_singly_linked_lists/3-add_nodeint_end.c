#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head:pointer to listint_t pointer -  points to head of list
 *
 * @n: const int: number to add to the list
 *
 * Return: address of the new element or NULL if it failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *curr_node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	curr_node = *head;

	while (curr_node->next != NULL)
		curr_node = curr_node->next;

	curr_node->next = node;

	return (node);
}
