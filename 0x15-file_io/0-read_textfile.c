#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function Reads
 *	a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *	function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wt = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wt);
}
