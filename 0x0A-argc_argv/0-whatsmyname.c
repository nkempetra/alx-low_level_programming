#include "main.h"

/**
 * main - print name of program.
 * @argc: number of arguments passed to the program.
 * @argv: an array of strings representing the arguments.
 *
 * return: 0 always
 */

int main(int argc, char* argv[])
{
	int i;
	(void) argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
