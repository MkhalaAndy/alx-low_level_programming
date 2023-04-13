#include "main.h"

/**
 * append_text_to_file - Appends the specified text to the end of a file.
 *
 * @filename: A pointer to a string containing the name of the file.
 * @text_content: A pointer to a string containing the text to append.
 *
 * Return: On success, returns 1. On failure, returns -1.
 *         If @filename is NULL or the file cannot be opened or written to,
 *         returns -1.
 *         If the file does not exist or the user lacks write permissions,
 *         returns -1.
 *
 * This function appends the specified text to the end of the file with the
 * specified name. If the file does not exist, it is created. If the file exists,
 * the text is added to the end of the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, andy = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (andy = 0; text_content[andy];)
			andy++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, andy);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
