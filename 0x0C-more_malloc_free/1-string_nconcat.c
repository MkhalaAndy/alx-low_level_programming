#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts string length
 *
 * @s: pointer
 *
 * Return: string length
 */

unsigned int _strlen(char *s)
{
	unsigned int x;

	for (x = 0; s[x]; x++)
		;

	return (x);
}

/**
 * string_nconcat - conactenates two strings
 *
 * @s1: pointer
 * @s2: pointer
 * @n: variable
 *
 * Return: pointer in new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcatn = NULL;
	unsigned int size1, size2, x, y;

	/*convertion of  strimngs: null to empty*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*allocating memory*/
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n > size2)
		n = size2;

	strcatn = malloc(sizeof(char) * (size1 + n + 1));

	if (strcatn == NULL)
		return (NULL);

	/*concatenation*/
	for (x = 0; s1[x] != '\0'; x++)
		strcatn[x] = s1[x];

	for (y = 0; y < n; y++)
		strcatn[x + y] = s2[y];

	strcatn[x + y] = '\0';

	return (strcatn);
}
