#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * Otherwise - the actual number of bytes
 * the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer; 
	int file, read_bytes, bytes_written;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = (char *) malloc(sizeof(char) * (letters + 1));

	if (!buffer)
	{
		close(file);
		return (0);
	}

	read_bytes = read(file, buffer, letters);

	if (read_bytes == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	buffer[read_bytes] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	close(file);

	if (bytes_written != read_bytes)
		return (0);

	return (read_bytes);
}
