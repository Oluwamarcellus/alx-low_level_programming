#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
*_err - displays error and exit with the code
*@err_code: error exit code
*@format: Error message
*Return: void
*/
void _err(int err_code, char *format, ...)
{
	va_list list;

	va_start(list, format);
	dprintf(STDERR_FILENO, format, va_arg(list, char *));
	va_end(list);
	exit(err_code);
}
/**
*main - entry point
*@count: argument count
*@argv: arg list
*Return: 0
*/
int main(int count, char *argv[])
{
	int from, to, rread, written;
	char buff[1024];

	if (count != 3)
		_err(97, "Usage: cp file_from file_to\n");
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		_err(98, "Error: Can't read from file %s\n", argv[1]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		_err(99, "Error: Can't write to %s\n", argv[2]);
	while ((rread = read(from, buff, 1024)) > 0)
	{
		written = write(to, buff, rread);
		if (written != rread)
			_err(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (rread == -1)
		_err(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(from) == -1)
		_err(100, "Error: Can't close fd %d\n", from);
	if (close(to) == -1)
		_err(100, "Error: Can't close fd %d\n", to);
	return (0);
}
