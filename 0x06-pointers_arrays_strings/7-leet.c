/**
*leet - encodes string to 1337
*@s: string
*Return: char
*/

char *leet(char *s)
{
	int i = 0, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
		i++;
	}
	return (s);
}
