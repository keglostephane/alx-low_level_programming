#include "lists.h"

/**
 * sum_listint - returns the sum of all data(n) of a linked list
 *
 * @head: listint_t pointer - points to head of the list
 *
 * Return: sum of all data of the linked list
 *
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
