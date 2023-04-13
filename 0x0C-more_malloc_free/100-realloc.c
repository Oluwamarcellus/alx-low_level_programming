#include <stdlib.h>
/**
*_realloc - reallocates a memory block
*@ptr: Pointer to the memory
*@old_size: Old size of memory allocated
*@new_size: New size of memory allocated
*Return: void pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == 0)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (ptr1 == 0)
		return (0);
	ptr2 = ptr;
	if (new_size < old_size)
	{
		for (n = 0; n < new_size; n++)
			ptr1[n] = ptr2[n];
	}
	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
			ptr1[n] = ptr2[n];
	}
	free(ptr);
	return (ptr1);
}
