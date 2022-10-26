#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to listint_t pointer - points to head of the linked list
 *
 * Return: the head node's data
 *
 * if linked linked list is empty return 0
 *
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *curr_node;

	if (head == NULL)
		return (0);

	curr_node = *head;
	data = curr_node->n;
	*head = (*head)->next;
	free(curr_node);

	return (data);
}
