#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, n;

	len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	while (text_content != NULL && text_content[len] != '\0')
	{
		len++;
	}

	n = write(fd, text_content, len);

	if (n == -1 || fd == -1)
		return (-1);

	close(fd);

	return (1);

}
