#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: minimum
*@max: maximum
*Return: pointer to array of integer
*/
int *array_range(int min, int max)
{
	int *num, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	num = malloc(sizeof(int) * size);
	if (num == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		num[i] = min++;
	}
	return (num);
}
