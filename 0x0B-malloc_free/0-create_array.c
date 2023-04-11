#include <stdlib.h>
/**
*create_array - creates an array of chars
*@size: size of array
*@c: initializer
*Return: char pointer
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	} else
	{
		a = malloc(sizeof(char) * size);
		if (a == NULL)
		{
			return (0);
		}
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	return (a);
}
