#include "main.h"
/**
*prime - checks prime number
*@n: number
*@i: iterator
*Return: int
*/
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}

/**
*is_prime_number - checks prime number
*@n: number
*Return: int
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
