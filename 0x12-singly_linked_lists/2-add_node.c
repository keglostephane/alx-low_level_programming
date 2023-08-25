#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 *
 * @head: head of the linked list
 *
 * @str: a string
 *
 *Return: a pointer to the new element or NULL in failure
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, l;
	list_t *node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	for (i = 0, l = 0; str[i] != '\0'; i++)
		l++;

	node->str = strdup(str);
	node->len = l;
	node->next = *head;
	*head = node;

	return (*head);
}
