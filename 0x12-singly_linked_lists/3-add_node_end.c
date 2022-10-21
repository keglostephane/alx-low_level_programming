#include "lists.h"

/**
 * add_node_end - adds a new node at the end of linked list
 *
 * @head: pointer to list_t pointer - head of linked list
 *
 * @str: const char pointer - string
 *
 * Return: the address of new element of linked list
 *
 * NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, l = 0;
	list_t *new_node, *curr_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		l++;

	new_node->str = strdup(str);
	new_node->len = l;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}


	curr_node = *head;

	while (curr_node->next != NULL)
		curr_node = curr_node->next;

	curr_node->next = new_node;
	return (new_node);
}
