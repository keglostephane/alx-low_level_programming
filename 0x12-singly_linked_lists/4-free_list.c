#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees a linked list
 *
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	list_t *prev_node, *next_node;

	if (!head)
	{
		while (head->next)
		{
			prev_node = head;
			next_node = head->next;
			head = next_node;

			free(prev_node->str);
			free(prev_node);
		}

		free(head->str);
		free(head);
	}
}
