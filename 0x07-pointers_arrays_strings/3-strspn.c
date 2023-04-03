/**
*_strspn - gets the length of a prefix substring
*@s: string
*@accept: bytes
*Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int k = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k = k + 1;
				break;
			} else if (accept[j + 1] == '\0')
			{
				return (k);
			}
		}
		i++;
	}
	return (k);
}
