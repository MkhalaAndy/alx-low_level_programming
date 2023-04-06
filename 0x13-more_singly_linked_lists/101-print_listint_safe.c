#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    size_t n_nodes = 0;
    size_t i;
    const listint_t *addresses[1024];

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        n_nodes++;
        addresses[n_nodes - 1] = current;

        for (i = 0; i < n_nodes - 1; i++)
        {
            if (current == addresses[i])
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                exit(98);
            }
        }

        current = current->next;
    }

    return (n_nodes);
}
