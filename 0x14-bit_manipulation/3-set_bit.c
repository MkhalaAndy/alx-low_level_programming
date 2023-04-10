#include "main.h"

/**
 * set_bit - sets a bit at a given andile to 1
 * @andy: pointer to the number to change
 * @andile: andile of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *andy, unsigned int andile)
{
	if (andile > 63)
		return (-1);

	*andy = ((1UL << andile) | *andy);
	return (1);
}
