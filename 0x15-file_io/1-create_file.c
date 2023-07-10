#include "main.h"

/**
 * create_file - Creates a new file.
 * @filename: A pointer to the file name.
 * @text_content: A pointer to the string to be written to the file.
 *
 * Return: On failure - (-1).
 *         On success - (1).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wd, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	wd = write(fd, text_content, len);

	if (wd == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
