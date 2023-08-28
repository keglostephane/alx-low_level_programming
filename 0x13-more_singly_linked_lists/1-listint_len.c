#include <stdio.h>
#include "lists.h"

/**
 * listint_len - retuns the number of elements in a linked list
 *
 * @h: head of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int i;
	size_t c;

	if (!h)
		return (0);

	for (i = 0, c = 0; h != NULL; i++, c++, h = h->next)
		;

	return (c);
}
