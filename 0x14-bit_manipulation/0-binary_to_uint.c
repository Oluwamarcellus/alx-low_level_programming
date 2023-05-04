#include "main.h"
/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: string pointer
*Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		convert = convert << 1;
		if (*b == '1')
			convert |= 1;
		b++;
	}
	return (convert);
}
