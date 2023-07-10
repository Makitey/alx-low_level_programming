#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program one by one.
 * @argv: array of arguments in vector.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int file_def_read, file_def_write, x, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_def_read = open(argv[1], O_RDONLY);
	if (file_def_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_def_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(ffile_def_readd_r, buf, BUFSIZ)) > 0)
	{
		if (file_def_write < 0 || write(file_def_write, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_def_read);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(file_def_read);
	n = close(file_def_write);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_def_read);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_def_write);
		exit(100);
	}
	return (0);
}
