#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*@s: string
*@accept: string
*Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
