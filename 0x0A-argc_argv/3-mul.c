#include "main.h"

/**
 * main - prints the number of arguments passed.
 * @argc: number of arguments passed to the program
 * @argv: an array of strings representing the arguments 
 *
 * Return: 0.  
 */

int main(int argc, char* argv[])
{
	int mul = 1;
	int i, x;

	if (argc < 2)
	{
		printf("Error\n");
		return 1;
	}

	for (i = 1; i < argc; i++) 
	{
		x = strtol(argv[i], NULL, 10);
		mul *= x;
	}
	printf("%d\n", mul);

	return 0;
}
