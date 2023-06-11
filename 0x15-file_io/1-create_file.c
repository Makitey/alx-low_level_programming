#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of a file that is to be readed.
 * @text_content: text that is to be  write in the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_def, x, y = 0;

	if (!filename)
		return (-1);

	file_def = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_def < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(file_def, text_content, y);
		if (x != y)
			return (-1);
	}

	close(file_def);

	return (1);
}
