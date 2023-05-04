#include "main.h"
/**
*get_endianness - checks the endianness
*Return: 0 or 1
*/
int get_endianness(void)
{
	unsigned int n = 1;
	char *s = (char *)&n;

	if (*s)
		return (1);
	return (0);
}
