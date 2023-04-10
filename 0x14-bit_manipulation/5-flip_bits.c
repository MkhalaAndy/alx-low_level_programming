#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int andile, mkhala = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (andile = 63; andile >= 0; andile--)
	{
		current = exclusive >> andile;
		if (current & 1)
			mkhala++;
	}

	return (mkhala);
}
