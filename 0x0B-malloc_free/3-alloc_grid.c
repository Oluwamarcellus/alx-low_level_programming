#include <stdlib.h>
/**
*alloc_grid -  returns a pointer to 2 dimensional array
*@width: width of the array
*@height: height of the array
*Return: pointer to pointer of an int
*/

int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	n = malloc(height * sizeof(int *));
	if (n == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		n[i] = malloc(width * sizeof(int));
		if (n[i] == 0)
		{
			for (j = i; j >= 0; j--)
			{
				free(n[j]);
			}
			free(n);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			n[i][j] = 0;
	}
	return (n);
}
