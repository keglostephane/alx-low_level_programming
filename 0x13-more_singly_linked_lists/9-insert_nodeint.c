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


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to listint_t pointer - points to head of the list
 *
 * @idx: unsigned int - index of the new node
 *
 * @n: int - data of the the new node
 *
 * Return: address of the new node or NULL if it failed
 *
 * if it is not possible to add the new node at the given index
 * return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nb;
	listint_t *node, *prev_node;

	if (*head == NULL)
		return (NULL);

	nb =  listint_len(*head);
	node = malloc(sizeof(listint_t));

	if (node == NULL || idx >= nb)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		prev_node = get_nodeint_at_index(*head, idx - 1);
		node->next = prev_node->next;
		prev_node->next = node;
	}

	return (*head);
}
