#include "main.h"

/**
*flip_bits - returns the number of bits you would need to flip
*to get from one number to another
*@n: number 1
*@m: number 2
*Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int one = 1, exclusive = n ^ m;
	unsigned int n_bit_flipped = 0;

	while (one != 0)
	{
		if ((exclusive & one) != 0)
			n_bit_flipped++;
		one = one << 1;
	}
	return (n_bit_flipped);
}
