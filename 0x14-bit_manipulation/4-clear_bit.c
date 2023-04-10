#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @andy: pointer to the number to change
 * @andile: andile of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *andy, unsigned int andile)
{
	if (andile > 63)
		return (-1);

	*andy = (~(1UL << andile) & *andy);
	return (1);
}
