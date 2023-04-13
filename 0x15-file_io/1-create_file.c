#include "main.h"

/**
 * create_file - Creates a new file with the specified name and writes the
 *               specified text to it.
 *
 * @filename: A pointer to a string containing the name of the file to create.
 * @text_content: A pointer to a string containing the text to write to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 *         If @filename is NULL or if the file cannot be created or written to,
 *         returns -1.
 *
 * If the file already exists, its contents are truncated and replaced with the
 * new text.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
