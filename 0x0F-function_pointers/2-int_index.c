/**
*int_index - function that searches for an integer
*@array: array
*@size: size of array
*@cmp: function
*Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == 0 || cmp == 0)
		return (0);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
