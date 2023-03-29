/**
*reverse_array - reverses array
*@a: array
*@n: number of array
*Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i <= n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
