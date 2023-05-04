#include "main.h"
/**
*set_bit - sets the value of a bit to 1 at a given index
*@n: number
*@index: index
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_indx_possible = sizeof(unsigned long int) * 8;

	if (index >= max_indx_possible)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
