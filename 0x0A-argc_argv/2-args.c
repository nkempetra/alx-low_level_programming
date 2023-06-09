#include "main.h"

/**
 * main - prints the number of arguments passed.
 *
 * @argc: number of arguments passed to the program
 * @argv: an array of strings representing the arguments
 *
 * Return: 0 if successful completion
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
