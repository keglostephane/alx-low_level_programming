#include "lists.h"

/**
 * add_node - adds a new node at the beginnnig of a list_t list
 *
 * @head: pointer to list_t pointer - points to head of linked list
 *
 * @str: char pointer - string
 *
 * Return: the address of new head of the list
 *
 * NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, l = 0;
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		l++;

	node->str = strdup(str);
	node->len = l;
	node->next = *head;

	*head = node;

	return (node);
}
