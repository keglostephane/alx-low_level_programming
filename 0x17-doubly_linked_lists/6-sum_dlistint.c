#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * Return: the sum of all data of the doubly linked list
 *
 * If the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
