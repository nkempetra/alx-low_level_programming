#include <stdio.h>

/**
 * main - prints the number of arguments passed.
 * @argc: number of arguments passed to the program
 * @argv: an array of strings representing the arguments 
 *
 * Return: 0.  
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
