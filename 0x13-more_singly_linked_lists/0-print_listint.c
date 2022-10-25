#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h: const listint_t pointer - singly linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
