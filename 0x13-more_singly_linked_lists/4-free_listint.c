#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: head of the linked list
 *
 */
void free_listint(listint_t *head)
{
	int i;
	listint_t *prev_node;

	for (i = 0; head != NULL; i++)
	{
		prev_node = head;
		head = head->next;
		free(prev_node);
	}
}
