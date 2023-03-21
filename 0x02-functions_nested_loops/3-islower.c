#include "main.h"
/**
 *_islower - determines lowercase letters
 *@c: an integer
 *Return: returns 0 for uppercase and 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
