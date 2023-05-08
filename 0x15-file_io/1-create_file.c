#include "main.h"
/**
*create_file - function that creates a file
*@filename: file name
*@text_content: text content
*Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t written, len;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;
		written =  write(fd, text_content, len);
		if (written == -1 || len != written)
			return (-1);
	}
	close(fd);
	return (1);
}
