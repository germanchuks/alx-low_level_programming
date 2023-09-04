#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: Name of file.
 * @letters: Number of letters that should be read and printed.
 *
 * Return: Actual number of letters it could read and print, or 0 if otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t read_bytes, written_bytes;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read_bytes = read(file_desc, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	free(buffer);
	close(file_desc);

	if (written_bytes == -1)
		return (0);

	return (written_bytes);
}
