#include "main.h"

/**
 *main - adds positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
	{
		printf("%d\n", add);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(num);
	}

	printf("%d\n", add);
	return (0);
}
