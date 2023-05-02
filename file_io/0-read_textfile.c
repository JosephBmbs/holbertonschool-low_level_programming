#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	if (o < 0 || r < 0)
	{
	w = write(STDERR_FILENO, buff, r);
	free(buff);
	return (0);
	}
	else
	{
	w = write(STDOUT_FILENO, buff, r);
	close(o);
	}
	return (w);
}
