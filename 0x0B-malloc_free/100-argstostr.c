#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program into a string
 * arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av) 
{
	if (ac == 0 || av == NULL) 
	{
		return NULL;
	}

	int totalSize = 0;
	for (int i = 0; i < ac; i++) 
	{
		for (int j = 0; av[i][j] != '\0'; j++) 
		{
			totalSize++;
		}
		totalSize++;
	}

	char *result = (char *) malloc(totalSize * sizeof(char));
	if (result == NULL) 
	{
		return NULL;
	}

	int currentIndex = 0;
	for (int i = 0; i < ac; i++) 
	{
		for (int j = 0; av[i][j] != '\0'; j++) 
		{
			result[currentIndex++] = av[i][j];
		}
		result[currentIndex++] = '\n';
	}

	result[currentIndex] = '\0';

	return result;
}
