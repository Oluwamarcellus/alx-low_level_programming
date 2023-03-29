#include <stdio.h>
/**
*_strncat - concatenates string with another string
*@dest: destination string
*@src: string source
*@n: size of string to copy
*Return: char*
*/

char *_strncat(char *dest, char *src, int n)
{
	int lenDest = 0;
	int i = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
		lenDest++;
	}
	while (k < n && src[k] != '\0')
	{
		dest[lenDest++] = src[k];
		k++;
	}
	return (dest);
}
