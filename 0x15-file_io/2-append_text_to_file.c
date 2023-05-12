#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of a file that is to be readed.
 * @text_content: content of the text to append into the file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_def, a, b = 0;

	if (!filename)
		return (-1);

	file_def = open(filename, O_WRONLY | O_APPEND);
	if (file_def < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(file_def, text_content, b);
		if (a != b)
			return (-1);
	}

	close(file_def);

	return (1);
}
