#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for n arry,
 * using malloc
 *
 * @nmemb: variable
 * @size: variable
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrlloc = NULL;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*allocating memory*/
	arrlloc = malloc(nmemb * size);

	if (arrlloc == NULL)
		return (NULL);

	/*initialising array with 0*/
	for (x = 0; x < nmemb * size; x++)
		arrlloc[x] = 0;

	return (arrlloc);
}
