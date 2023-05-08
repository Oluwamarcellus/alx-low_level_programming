#include "main.h"
/**
*read_textfile - reads a file,  prints it to the POSIX standard output
*@filename: name of file to read
*@letters: size to read
*Return: Actual number printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	signed int size;
	signed int size2;
	char buff[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = read(fd, buff, letters);
	if (size == -1)
	{
		close(fd);
		return (0);
	}
	size2 = write(STDOUT_FILENO, buff, letters);
	if (size2 == -1 || size2 != (ssize_t)letters)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (size);
}
