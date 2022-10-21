#include "lists.h"

/**
 * free_list - frees a linked list
 *
 * @head: pointer to list_t - head of linked list
 *
 *
 */

void free_list(list_t *head)
{
	list_t *prev_node, *curr_node;

	curr_node = head;

	while (curr_node != NULL)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		free(prev_node->str);
		free(prev_node);
	}

}
