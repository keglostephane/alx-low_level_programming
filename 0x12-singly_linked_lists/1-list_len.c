#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: const list_t pointer - linked list
 *
 * Return: number of element in the linked list
 *
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		n++;
		list = list->next;
	}

	return (n);
}
