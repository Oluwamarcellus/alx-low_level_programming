#include <stdarg.h>
#include <stdio.h>
/**
*print_all - function that prints anything
*@format: list of types of arguments passed
*Return: void
*
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sp = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == 0)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sp = ", ";
		}
	}
	printf("\n");
	va_end(list);
}
