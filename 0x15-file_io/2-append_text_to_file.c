#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append text to.
 * @text_content: NULL-terminated string to add to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc; /* File descriptor */
	int len; /* Length of text_content */
	ssize_t wrt; /* Bytes written */

	/* Check for valid filename */
	if (!filename)
		return (-1);

	/* Open file in append mode */
	fdesc = open(filename, O_WRONLY | O_APPEND);
	if (fdesc == -1)
		return (-1);

	/* Check if text_content is provided */
	if (text_content)
	{
		/* Calculate length of text_content */
		for (len = 0; text_content[len]; len++)
			;

		/* Append text to file */
		wrt = write(fdesc, text_content, len);
		close(fdesc);

		/* Check write success */
		return ((wrt != -1) ? 1 : -1);
	}

	close(fdesc);
	return (1);
}
