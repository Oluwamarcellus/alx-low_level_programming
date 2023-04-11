#include <stdlib.h>
/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*Return: char pointer
*/
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, g_len, i = 0, j = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	if (s2 == NULL)
		s2 = "";
	while (s2[s2_len] != '\0')
		s2_len++;
	g_len = (s1_len + s2_len);
	a = malloc(sizeof(char) * (g_len + 1));
	if (a == 0)
		return (0);
	while (j < s1_len)
	{
		a[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (j < s2_len)
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	return (a);
}
