#include <stdarg.h>
#include <stdio.h>
/**
*_separator - separates output
*@format: format
*@i: iterator
*Return: void
*/
void _separator(const char * const format, int i)
{
	if (format[i + 1] != 0 &&
	(format[i] == 'c' ||
	format[i] == 'i' ||
	format[i] == 'f' ||
	format[i] == 's'))
	{
		printf(", ");
	}
}
/**
*print_all - unction that prints anything
*@format: list of types of arguments passed
*Return: void
*
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;

	va_list list;

	va_start(list, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == 0)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		_separator(format, i);
		i++;
	}
	printf("\n");
	va_end(list);
}
