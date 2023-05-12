#include "main.h"

/**
 * read_textfile - Reads the text_file and prints it into stdout.
 * @filename: name of a file that is to be readed.
 * @letters: number of letters that is to read and get print.
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_def, i, y;
	char *buf;

	if (!filename)
		return (0);
	file_def = open(filename, O_RDONLY);
	if (file_def < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(file_def, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(file_def);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
