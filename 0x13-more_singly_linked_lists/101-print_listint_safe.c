#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: head of the linked list
 *
 * Return: the number of nodes in the list
 *
 * if the function fails, exit the program with status 98
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	unsigned int count, cycle;

	if (!head)
	{
		return (0);
		exit(98);
	}

	slow = head;
	fast = head;
	cycle = 0;
	count = 0;
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		if (!cycle)
		{
			slow = slow->next;
			if (fast && fast->next)
				fast = fast->next->next;
			if (fast == slow)
			{
				cycle = 1;
				fast = head;
			}
		}
		else
		{
			slow = slow->next;
			fast = fast->next;
			if (slow == fast)
				break;

		}
	}

	return (count);
}
