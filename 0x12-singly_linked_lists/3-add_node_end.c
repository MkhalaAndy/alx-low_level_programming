#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - count string length
 *
 * @s: pointer
 *
 * Return: x
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;

	return (x);
}

/**
 * add_node_end - add new node at end of list_t
 *
 * @head: pointer to pointer
 * @str: pointer
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = NULL;
	list_t *end_node = NULL;

	if (str == NULL)
		return (NULL);

	/*Allocating new node memory*/
	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	/*Creation of new node*/
	new_end->str = strdup(str);

	/*free new node if strdup fails*/
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}

	new_end->len = _strlen(new_end->str);
	new_end->next = NULL;

	/*finding current last node*/
	if (*head == NULL)/*if list empty*/
	{
		*head = new_end;
		return (new_end);
	}

	for (end_node = *head; end_node->next != NULL;)
		end_node = end_node->next;

	end_node->next = new_end;

	return (new_end);
}
