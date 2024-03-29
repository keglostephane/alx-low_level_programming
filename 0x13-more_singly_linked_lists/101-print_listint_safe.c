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
	const listint_t *slow = head, *fast = head;
	unsigned int count = 0, cycle = 0;

	if (!head)
		return (0);

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		if (!cycle)
		{
			if (slow == slow->next || slow->next == head)
			{
				printf("-> [%p] %d\n", (void *)slow->next,
				       slow->next->n);
				break;
			}
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
			{
				printf("-> [%p] %d\n", (void *)fast, fast->n);
				break;
			}
		}
	}
	return (count);
}
