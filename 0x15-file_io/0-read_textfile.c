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
	ssize_t oprt, read, wrt;
	char *buffer;

	if (filename == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == 0)
		return (0);

	oprt = open(filename, O_RDONLY);
	read = read(oprt, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, read);

	if (oprt == -1 || read == -1 || wrt == -1 || wrt != read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wrt);
}
