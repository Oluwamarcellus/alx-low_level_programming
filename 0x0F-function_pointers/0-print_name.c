/**
*print_name - function that prints a name
*@name: name to print
*@f: function that prints the name
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
