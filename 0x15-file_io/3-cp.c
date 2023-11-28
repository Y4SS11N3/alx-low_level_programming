#include "main.h"
#include <stdio.h>

/**
 * check_error - Checks for file open/read/write errors.
 * @src_fd: Source file descriptor.
 * @dest_fd: Destination file descriptor.
 * @args: Argument vector.
 */
void check_error(int src_fd, int dest_fd, char *args[])
{
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - Copies content from one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with specific codes on errors.
 */
int main(int argc, char *argv[])
{
	int src, dest; /* Source and destination file descriptors */
	int close_status; /* Status of file closing */
	ssize_t read_bytes, written_bytes; /* Bytes read and written */
	char buffer[1024]; /* Buffer for file content */

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(src, dest, argv);

	while ((read_bytes = read(src, buffer, 1024)) > 0)
	{
		written_bytes = write(dest, buffer, read_bytes);
		if (written_bytes != read_bytes)
			check_error(0, -1, argv);
	}
	if (read_bytes == -1)
		check_error(-1, 0, argv);

	close_status = close(src);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	close_status = close(dest);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
