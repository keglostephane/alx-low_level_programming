#include "lists.h"

/**
 * list_len - returns the number of elements in a linkded list
 *
 * @h: linked list
 *
 * Return: the number of element of a linked list
 *
 */
size_t list_len(const list_t *h)
{
	int n;

	if (!h)
		return (0);

	for (n = 0; h != NULL; h = h->next)
		n++;

	return (n);
}
