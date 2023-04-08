#include "main.h"

/**
 * append_text_to_file - This function
 *	appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, length = 0;

	if (!filename)
		return (-1);

	if (text_content != 0)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, length);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}