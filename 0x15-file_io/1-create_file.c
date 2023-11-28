#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc; /* File descriptor */
	int len; /* Length of text_content */
	ssize_t wrt; /* Bytes written */

	/* Check for valid filename */
	if (!filename)
		return (-1);

	/* Open/Create file with required permissions */
	fdesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdesc == -1)
		return (-1);

	/* Handle null text_content */
	if (!text_content)
	{
		close(fdesc);
		return (1);
	}

	/* Calculate length of text_content */
	for (len = 0; text_content[len]; len++)
		;

	/* Write to file */
	wrt = write(fdesc, text_content, len);
	close(fdesc);

	/* Check write success */
	return ((wrt != -1) ? 1 : -1);
}
