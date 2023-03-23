#include <stdio.h>
#include <math.h>

/**
*main - entry point
*Return: 0
*/

int main(void)
{
	long int num = 612852475143;
	long int maxi = -1;
	int i;

	while (num % 2 == 0)
	{
		maxi = 2;
		num = num / 2;
	}
	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			maxi = i;
			num = num / i;
		}
	}
	if (num > 2)
		maxi = num;
	printf("%ld\n", maxi);
	return (0);
}


