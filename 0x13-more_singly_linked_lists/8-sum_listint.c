#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum_Andy
 */
int sum_listint(listint_t *head)
{
	int sum_Andy = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_Andy += temp->n;
		temp = temp->next;
	}

	return (sum_Andy);
}
