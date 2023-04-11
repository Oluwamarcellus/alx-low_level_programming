#include <stdlib.h>
/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*Return: char pointer
*/
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, g_len, i = 0;
	char *a;

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	g_len = (s1_len + s2_len);
	a = malloc(sizeof(char) * g_len);
	if (a == 0)
		return (0);
	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len] != '\0')
	{
		a[i] = s1[s1_len];
		i++;
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		a[i] = s2[s2_len];
		i++;
		s2_len++;
	}
	return (a);
}
