#include "lists.h"

/**
 * print_listint - print the int value in each element of a list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */

size_t print_listint(const listint_t *h)
{
	size_t Andy = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Andy++;
		h = h->next;
	}

	return (num);
}
