#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new_Andy_Andy node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new_Andy_Andy node is added
 * @n: data to insert in the new_Andy node
 *
 * Return: pointer to the new_Andy node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_Andy;
	listint_t *temp = *head;

	new_Andy = malloc(sizeof(listint_t));
	if (!new_Andy || !head)
		return (NULL);

	new_Andy->n = n;
	new_Andy->next = NULL;

	if (idx == 0)
	{
		new_Andy->next = *head;
		*head = new_Andy;
		return (new_Andy);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_Andy->next = temp->next;
			temp->next = new_Andy;
			return (new_Andy);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
