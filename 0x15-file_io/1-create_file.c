#include "main.h"

/**
 * create_file - This function Creates a file.
 * @filename: A pointer to the name of the file to created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wt, length = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, length);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
