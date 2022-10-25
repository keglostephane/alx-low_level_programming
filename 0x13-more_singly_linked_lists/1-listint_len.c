#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: cont listint_t pointer - linked list
 *
 * Return: the number of elements of linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int n;

	if (h == NULL)
		return (0);

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
