#include "main.h"

int main(int ac, char **argv)
{
	int n;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	n = cp(argv[1], argv[2]);

	return (n);
}

int cp(char *file_from, char *file_to)
{
	int fd1, fd2, n_from, n_to, n_close1, n_close2;
	char buffer[1025];


	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((n_from = read(fd1, buffer, 1024)) != 0)
	{
		n_to = write(fd2, buffer, n_from);
	}

	if (n_from == -1 || fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (n_to == -1 || fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	n_close1 = close(fd1);
	n_close2 = close(fd2);

	if (n_close1 == -1)
	{
		dprintf(2, "Error: Can't close fd %i", n_close1);
		exit(100);
	}

	if (n_close2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i", n_close1);
		exit(100);
	}

	return (1);
}
