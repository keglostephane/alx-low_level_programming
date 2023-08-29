#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * sets the head to NULL after freeing the list
 */
void free_listint2(listint_t **head)
{
	int i;
	listint_t *curr_node, *next_node;

	if (!head)
	{
		curr_node = *head;

		for (i = 0; curr_node != NULL; i++)
		{
			next_node = curr_node->next;
			free(curr_node);
			curr_node = next_node;
		}

		*head = NULL;
	}
}
