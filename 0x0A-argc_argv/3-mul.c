#include "main.h"

/**
 * main - prints the number of arguments passed.
 * @argc: number of arguments passed to the program
 * @argv: an array of strings representing the arguments 
 *
 * Return: 0.  
 */

int main(int argc, char *argv[])
{
	int i, x;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = 1;

		for (i = 1; i < 3; i++)
		x *= atoi(argv[i]);

		printf("%d\n", x);
	}

	return (0);
}
