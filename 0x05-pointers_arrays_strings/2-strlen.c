/**
*_strlen - calculates the length of string
*@s: pointer variable
*Return: int
*/


int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
