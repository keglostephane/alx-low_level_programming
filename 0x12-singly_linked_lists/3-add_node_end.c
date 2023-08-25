#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of a linked list
 *
 * @head: head of the linked list
 *
 * @str: node string
 *
 * Return: the address of the new element, or NULL in failure
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, l;
	list_t *node, *prev_node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	for (i = 0, l = 0; str[i] != '\0'; i++)
		l++;

	node->str = strdup(str);
	node->len = l;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (*head);
	}

	prev_node = *head;

	while (prev_node->next != NULL)
		prev_node = prev_node->next;

	prev_node->next = node;

	return (node);
}
