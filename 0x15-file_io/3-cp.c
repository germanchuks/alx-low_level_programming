#include "main.h"

/**
 * check_file_error - Checks if source or destination files can be opened.
 * @file_desc_from: Source file.
 * @file_desc_to: Destination file.
 * @argv: Array of arguments.
 *
 * Return: Nothing.
 */
void check_file_error(int file_desc_from, int file_desc_to, char *argv[])
{
	if (file_desc_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_desc_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(file_desc_from);
		exit(99);
	}
}

/**
 * check_write_error - Checks if source or destination files can be opened.
 * @file_desc_from: Source file.
 * @file_desc_to: Destination file.
 * @written_bytes: Value of bytes to be written to destination file.
 * @argv: Array of arguments.
 *
 * Return: Nothing.
 */
void check_write_error(int file_desc_from, int file_desc_to,
					   ssize_t written_bytes, char *argv[])
{
	if (written_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_desc_from);
		close(file_desc_to);
		exit(99);
	}
}
/**
 * check_read_error - Checks if source or destination files can be opened.
 * @file_desc_from: Source file.
 * @file_desc_to: Destination file.
 * @read_bytes: Value of bytes read from source file.
 * @argv: Array of arguments.
 *
 * Return: Nothing.
 */
void check_read_error(int file_desc_from, int file_desc_to, ssize_t read_bytes,
					  char *argv[])
{
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_desc_from);
		close(file_desc_to);
		exit(98);
	}
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_desc_from, file_desc_to;
	ssize_t read_bytes, written_bytes;
	int FD_value;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_desc_from = open(argv[1], O_RDONLY);
	file_desc_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_file_error(file_desc_from, file_desc_to, argv);

	while ((read_bytes = read(file_desc_from, buffer, sizeof(buffer))) > 0)
	{
		written_bytes = write(file_desc_to, buffer, read_bytes);
		check_write_error(file_desc_from, file_desc_to, written_bytes, argv);
	}

	check_read_error(file_desc_from, file_desc_to, read_bytes, argv);

	if (close(file_desc_from) == -1 || close(file_desc_to) == -1)
	{
		FD_value = (close(file_desc_from) == -1) ? file_desc_from : file_desc_to;
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD_value);
		exit(100);
	}
	return (0);
}
