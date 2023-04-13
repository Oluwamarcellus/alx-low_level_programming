#include <stdlib.h>
/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: number of blocks
*@size: size of each block
*Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	return (ptr);
}
