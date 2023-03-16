#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 *
 * @min: variable
 * @max: variable
 *
 * Return: pointer in new array
 */

int *array_range(int min, int max)
{
	int *range = NULL;
	int x;

	if (min > max)
		return (NULL);

	/*allocating memory*/
	range =  malloc(sizeof(int) * (max - min + 1));

	if (range == NULL)
		return (NULL);

	/*filling array*/
	for (x = 0; min <= max; min++, x++)
		range[x] = min;

	return (range);

}
