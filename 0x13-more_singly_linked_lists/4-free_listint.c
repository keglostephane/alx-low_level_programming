#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: listint pointer -points to a list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *curr_node, *next_node;

	curr_node = head;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node);
		curr_node = next_node;
	}
}
