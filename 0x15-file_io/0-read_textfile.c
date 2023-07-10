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
	ssize_t oprt, rd, wrt;
	char *buf;

	if (filename == 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == 0)
		return (0);

	oprt = open(filename, O_RDONLY);
	rd = rd(oprt, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (oprt == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wrt);
}
