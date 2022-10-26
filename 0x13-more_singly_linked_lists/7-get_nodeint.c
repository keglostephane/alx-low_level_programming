#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: listint_t pointer - points to head of the list
 *
 * @index: unsigned int - index of given node inside the linked list
 *
 * Return: the nth node of the linked list
 *
 * if the node does not exist , return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (head != NULL)
	{
		if (index == i)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
