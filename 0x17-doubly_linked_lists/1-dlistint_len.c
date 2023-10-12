#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 *
 * @h: head of the doubly linked list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n = 0;
	const dlistint_t *curr = h;

	while (curr)
	{
		curr = curr->next;
		n++;
	}

	return (n);
}
