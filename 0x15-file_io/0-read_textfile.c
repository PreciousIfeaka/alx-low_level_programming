#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * @filename: a pointer to the file-path string
 * @letters: the amount of letters to be printed
 *
 * Return: the number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, wr;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd < 0 || !filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	r = read(fd, buff, letters);
	if (r < 0)
	{
		free(buff);
		return (0);
	}
	buff[r] = '\0';
	close(fd);

	wr = write(STDOUT_FILENO, buff, r);
	if (wr < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (wr);
}





