#include "main.h"

/**
*get_bit - returns the value of a bit at a given index
*@index: index to return value of bit
*@n: number
*Return: value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_indx_possible = (sizeof(unsigned long int) * 8);

	if (index >= max_indx_possible)
		return (-1);
	return ((n >> index) & 1);
}
