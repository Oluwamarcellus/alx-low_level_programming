/**
*reverse_array - reverses array
*@a: array
*@n: number of array
*Return: void
*/

void reverse_array(int *a, int n)
{
	int hn = (n / 2);
	int i = 0, j;

	while (i <= hn && n >= hn)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		i++;
		n--;
	}
}
