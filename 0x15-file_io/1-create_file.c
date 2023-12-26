#include "main.h"

/**
  * create_file - that creates a file
  * @filename: is the name of the file to create
  * @text_content: NULL terminated string to write to the file
  *
  * Return: 1 on success, -1 on failure (file can not be created, file can not
  * be written, write “fails”, etc…)
  */
int create_file(const char *filename, char *text_content)
{
	int fd, n, len;

	len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content != NULL && text_content[len] != '\0')
	{
		len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(fd, text_content, len);

	if (n == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
