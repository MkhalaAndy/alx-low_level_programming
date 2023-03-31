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
 * add_node - add new node to beginning of list_t
 *
 * @head: pointer
 * @str: pointer
 *
 * Return: address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (str == NULL)
		return (NULL);

	/*Allocatingnew node memory*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/*new node creation*/
	new->str = strdup(str);

	/*free new node if strdup fails*/
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
