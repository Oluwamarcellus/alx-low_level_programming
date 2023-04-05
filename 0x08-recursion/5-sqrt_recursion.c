#include "main.h"
/**
*squarootfxn - recursion function
*@n: number
*@i: ite
*Return: int
*/
int squarootfxn(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squarootfxn(n, i + 1));
}

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: number
*Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squarootfxn(n, 0));
}
