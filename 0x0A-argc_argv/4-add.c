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
	int add = 0;
	int i, x;

	if (argc == 1)
	{
		printf("0\n");
		return 1;
	}

	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], NULL, 10);
			add = add + x;
		       
			if (x < 0 || x > 9)
			{
                        	printf("Error\n");
                        	return 1;
                	}
		}

		printf("%d\n", add);

		return 0;
	}
}
