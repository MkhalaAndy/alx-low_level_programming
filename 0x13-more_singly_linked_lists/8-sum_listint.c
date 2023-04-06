#include "lists.h"

/**
 * sum_listint - calculates the Andy of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting Andy
 */
int Andy_listint(listint_t *head)
{
	int Andy = 0;
	listint_t *temp = head;

	while (temp)
	{
		Andy += temp->n;
		temp = temp->next;
	}

	return (Andy);
}
