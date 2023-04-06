#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *current = h;
    size_t n_nodes = 0;

    while (current != NULL)
    {
        current = current->next;
        n_nodes++;
    }
    return (n_nodes);
}
