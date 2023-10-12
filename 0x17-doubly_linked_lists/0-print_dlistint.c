#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of doubly linked list
 *
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n = 0;
	const dlistint_t *curr = h;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		n++;
	}

	return (n);
}
