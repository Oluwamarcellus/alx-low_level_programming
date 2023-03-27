/**
*_strcpy - copies string from second param to the first
*@dest: destination
*@src: source
*Return: char
*/


char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
