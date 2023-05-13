#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This function reads and outputs a text file
 * to POSIX stdout.
 * @filename: Pointer to the file name.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * Otherwise - the actual number of bytes
 * the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openFile, readFile, writeFile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	openFile = open(filename, O_RDONLY);
	readFile = read(openFile, buffer, letters);
	writeFile = write(STDOUT_FILENO, buffer, readFile);

	if (openFile == -1 || readFile == -1 || writeFile == -1
			|| writeFile != readFile)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openFile);

	return (writeFile);
}
