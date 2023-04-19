#include <stddef.h>
/**
*array_iterator - executes a passed in functn on each elm of an array
*@array: array
*@size: size of the array
*@action: the function
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != 0 && size != 0 && action != 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	} else
	{
		return;
	}
}
