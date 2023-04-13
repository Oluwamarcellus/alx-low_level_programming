#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: number of bytes
*Return: char pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1l = 0, s2l = 0, ml = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	while (s1[s1l] != '\0')
		s1l++;
	if (s2 == NULL)
		s2 = "";
	while (s2[s2l] != '\0')
		s2l++;
	if (n >= s2l)
		n = s2l;
	ptr = malloc(sizeof(char) * (s1l + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (s1l = 0; s1[s1l] != '\0'; s1l++)
	{
		ptr[ml] = s1[s1l];
		ml++;
	}
	for (s2l = 0; s2l < n; s2l++)
	{
		ptr[ml] = s2[s2l];
		ml++;
	}
	ptr[ml] = '\0';
	return (ptr);
}
