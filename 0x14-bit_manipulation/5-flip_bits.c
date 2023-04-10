#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @andy: first number
 * @mkhala: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int andy, unsigned long int mkhala)
{
	int g, andile = 0;
	unsigned long int current;
	unsigned long int exclusive = andy ^ mkhala;

	for (g = 63; g >= 0; g--)
	{
		current = exclusive >> i;
		if (current & 1)
			andile++;
	}

	return (andile);
}
