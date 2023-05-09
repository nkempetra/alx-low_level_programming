#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) 
{
	if (!filename) 
	{
		return 0;
	}

	FILE *file = fopen(filename, "r");
	if (!file) {
		return 0;
	}

	char *buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer) {
		fclose(file);
		return 0;
	}

	ssize_t read_bytes = fread(buffer, sizeof(char), letters, file);
	if (ferror(file)) {
		free(buffer);
		fclose(file);
		return 0;
	}

	buffer[read_bytes] = '\0';

	if (write(STDOUT_FILENO, buffer, read_bytes) != read_bytes) {
		free(buffer);
		fclose(file);
		return 0;
	}

	free(buffer);
	fclose(file);
	return read_bytes;
}
