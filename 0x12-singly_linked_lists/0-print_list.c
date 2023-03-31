#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list_t elements
 *
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	for (n_nodes = 0; h != NULL; n_nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (n_nodes);
}
