#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opt, wrt, leng = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	opt = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opt, text_content, leng);

	if (opt == -1 || wrt == -1)
		return (-1);

	close(opt);

	return (1);
}

