#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int letters_length = 0;
	int write_file;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[letters_length])
			letters_length++;

		write_file = write(file_desc, text_content, letters_length);

		if (write_file == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
