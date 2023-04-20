#include <stdarg.h>
#include <stdio.h>
/**
*print_strings -  prints strings, followed by a new line
*@separator: string to be printed between the strings
*@n: size of arg
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == 0)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator != 0)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
