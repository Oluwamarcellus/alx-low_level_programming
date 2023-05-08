#include "main.h"
/**
*append_text_to_file - appends text at the end of a file
*@filename: file name
*@text_content: text content
*Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t written, len;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;
		written =  write(fd, text_content, len);
		if (written == -1 || len != written)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
