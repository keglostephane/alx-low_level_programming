#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: const list_t pointer - list_t list
 *
 * Return: the number of nodes of the list
 *
 * if `str` is NULL , print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	const list_t *list;

	list = h;
	while (list != NULL)
	{
		printf("[%u] ", list->len);

		if (list->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", list->str);

		list = list->next;
		n++;
	}

	return (n);
}
