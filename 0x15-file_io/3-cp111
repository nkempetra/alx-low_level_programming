#include "main.h"

char *create_buffer(void);
void close_fd(int *fd);
void error_exit(int code, char *msg, char *file);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
		error_exit(99, "Can't allocate memory", NULL);

	return (buffer);
}

/**
 * close_fd - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int *fd)
{
	if (*fd != -1 && close(*fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd);
		exit(100);
	}
}

/**
 * error_exit - Prints an error message and exits.
 * @code: The exit code.
 * @msg: The error message.
 * @file: File name for the error message.
 */
void error_exit(int code, char *msg, char *file)
{
	if (file != NULL)
		dprintf(STDERR_FILENO, "Error: %s %s\n", msg, file);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);

	exit(code);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from = -1, to = -1, read_bytes = 0, written_bytes = 0;
	char *buffer;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", NULL);

	buffer = create_buffer();

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_exit(98, "Can't read from", argv[1]);

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		error_exit(99, "Can't write to", argv[2]);

	while ((read_bytes = read(from, buffer, 1024)) > 0)
	{
		written_bytes = write(to, buffer, read_bytes);

		if (written_bytes == -1)
			error_exit(99, "Can't write to", argv[2]);

		if (written_bytes != read_bytes)
			error_exit(99, "Write error: Unexpected number of bytes written", argv[2]);
	}

	if (read_bytes == -1)
		error_exit(98, "Can't read from", argv[1]);

	free(buffer);
	close_fd(&from);
	close_fd(&to);

	return (0);
}
