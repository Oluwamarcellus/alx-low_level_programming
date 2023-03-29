/**
*rot13 - encodes string using rot13
*@a: string
*Return: char
*/

char *rot13(char *a)
{
	int i = 0, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphR[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (a[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == alp[j])
			{
				a[i] = alphR[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
