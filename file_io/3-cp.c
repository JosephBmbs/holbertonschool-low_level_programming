#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the function fails - exit status codes as follows:
 *         97 if the number of arguments is incorrect.
 *         98 if file_from does not exist or if you cannot read it.
 *         99 if you cannot create or if write to file_to fails.
 *         100 if you cannot close the file descriptor.
 *         O/w - 0.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w, c;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		r = read(fd_from, buffer, BUFFER_SIZE);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		w = write(fd_to, buffer, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (r == BUFFER_SIZE);

	c = close(fd_from);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	c = close(fd_to);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
