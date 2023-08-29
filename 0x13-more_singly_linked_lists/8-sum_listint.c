#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 *
 * @head: listint_t linked list
 *
 * Return: the sum of all data (n) of a listint_t linked list
 *
 * If the list is empty, return 0
 *
 */
int sum_listint(listint_t *head)
{
	int i, sum;
	listint_t *node;

	if (!head)
		return (0);

	node = head;

	for (i = 0, sum = 0; node != NULL; i++, node = node->next)
		sum += node->n;

	return (sum);
}
