#include "lists.h"

/**
 * list_len - return number of elemts in list_t
 *
 * @h: pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	for (n_nodes = 0; h != NULL; n_nodes++)
		h = h->next;

	return (n_nodes);
}
