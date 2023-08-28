#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 *
 * @h: head of the linked link
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c;
	int i;

	if (!h)
		return (0);

	for (i = 0, c = 0; h != NULL; h = h->next, c++, i++)
		printf("%d\n", h->n);

	return (c);
}
