#include <stdio.h>
/**
*_strcat - copies string to another string
*@dest: dest string
*@src: string src
*Return: char*
*/

char *_strcat(char *dest, char *src)
{
	int lenDest = 0, lenSrc = 0;
	int i = 0, j = 0, k, l;

	while (dest[i] != '\0')
	{
		i++;
		lenDest++;
	}
	while (src[j] != '\0')
	{
		j++;
		lenSrc++;
	}
	for (k = 0; k < lenSrc; k++)
	{
		for (l = 0; l <= lenDest; l++)
		{
			if (dest[l] == '\0')
			{
				dest[l] = src[k];
			}
		}
		lenDest++;
		dest[lenDest] = '\0';
	}
	return (dest);
}
