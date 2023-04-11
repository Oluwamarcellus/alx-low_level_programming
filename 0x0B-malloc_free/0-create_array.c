#include <stdlib.h>
/**
*create_array - creates an array of chars
*@size: size of array
*@c: initializer
*Return: char pointer
*/

char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
