#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: string
*@b: constant string
*@n: bumber of bytes to fill
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int sLen = 0, i;

	while (s[sLen] != '\0')
	{
		sLen++;
	}
	for (i = 0; i < sLen; i++)
	{
		if (i < n)
		{
			s[i] = b;
		}
	}
	return (s);
}
