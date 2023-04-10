#include "main.h"
#include <stdio.h>

/**
 * main - print name of program.
 * @argc: number of arguments passed to the program.
 * @argv: an array of strings representing the arguments.
 *
 * return: 0 always
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return 0;
}
