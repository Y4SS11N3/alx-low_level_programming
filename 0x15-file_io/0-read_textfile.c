#include "main.h"

/**
 * read_textfile - Reads and prints a text file to POSIX standard output.
 * @filename: The file's name.
 * @letters: Number of letters to read and print.
 *
 * Return: The number of letters read and printed; 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc; /* File descriptor */
	ssize_t rd, wr; /* Bytes read and written */
	char *buffer; /* File content buffer */

	if (!filename)
		return (0);

	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fdesc);
		return (0);
	}

	rd = read(fdesc, buffer, letters);
	if (rd <= 0)
	{
		free(buffer);
		close(fdesc);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(fdesc);
	return ((wr == rd) ? wr : 0);
}
