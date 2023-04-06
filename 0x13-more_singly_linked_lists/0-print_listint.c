#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the int value in each element of a list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t n_nodes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n_nodes++;
	}
	return (n_nodes);
}
