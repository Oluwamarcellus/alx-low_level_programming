/**
*_isupper - func that checks for uppercase letter
*@c: an integer param
*Return: 0 if lowercase, 1 if uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
