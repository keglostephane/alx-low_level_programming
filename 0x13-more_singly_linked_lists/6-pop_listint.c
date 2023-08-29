#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: the head node data
 *
 * If the linked list is empty return 0
 *
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *curr_node;

	if (!head)
		return (0);

	curr_node = *head;
	d = curr_node->n;
	*head = curr_node->next;
	free(curr_node);

	return (d);
}
