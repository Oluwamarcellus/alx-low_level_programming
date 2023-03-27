/**
*rev_string - reverse string
*@s: char param
*Return: void
*/


void rev_string(char *s)
{
	char ch = s[0];
	int c = 0, i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		ch = s[i];
		s[i] = s[c];
		s[c] = ch;
	}
}

