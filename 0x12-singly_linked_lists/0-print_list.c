#include "lists.h"

/**
 * print_list - prints all element of a list_t list
 *
 * @h: linked list
 *
 * Return: the number of nodes in the linked list
 *
 * if str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	unsigned int c;

	if (!h)
		return (0);

	c = 0;
	while (h)
	{
		if (!h->str)
			printf("[%d] (nil)\n", c);
		else
			printf("[%d] %s\n", h->len, h->str);

		c++;
		h = h->next;
	}

	return (c);
}
