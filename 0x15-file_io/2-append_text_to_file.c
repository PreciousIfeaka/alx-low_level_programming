#include "main.h"

/**
 * append_text_to_file - appends a text content to a file
 * @filename: a pointer to the pathname of the file
 * @text_content: a pointer to the text content to be appended
 *
 * Return: 1 if successful and -1 if otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, i = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	w = write(o, text_content, i);

	if (o < 0 || w < 0)
		return (-1);

	close(o);
	return (1);
}
