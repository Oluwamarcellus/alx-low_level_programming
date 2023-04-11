#include <stdlib.h>
/**
*_strdup - returns a pointer to allocated space in memory
*@str: original string pointer
*Return: pointer to the allocated memory
*/
char *_strdup(char *str)
{
	char *a;
	int l, i;

	if (str == 0)
	{
		return (0);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	a = malloc((sizeof(char) * l) + 1);
	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i <= l; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
