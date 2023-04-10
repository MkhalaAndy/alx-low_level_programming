#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @andy: first number
 * @mkhala: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	int g, andile = 0;
	unsigned long int yangoku;	/*current*/
	unsigned long int kuphela = n ^ m;	/*exclusive*/

	for (g = 63; g >= 0; g--)
	{
		yangoku = kuphela >> g;
		if (yangoku & 1)
			andile++;
	}

	return (andile);
}
