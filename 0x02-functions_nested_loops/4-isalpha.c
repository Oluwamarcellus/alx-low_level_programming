#include "main.h"
/**
 *_isalpha - checks for alphanumeric values
 *@c: an integer
 *Return: 0 0r 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
