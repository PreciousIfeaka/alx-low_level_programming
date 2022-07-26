#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the file pathname
 * @text_content: a pointer to the file created file contents
 *
 * Return: 1 if successful and -1 if otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int o, i = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content)
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
