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
	char *str;
	int tl, i, position;

	if (ac == 0 || av == NULL) 
	{
		return NULL;
	}
	tl = 0;
	for(i = 0; i < ac; i++)
	{
		tl += strlen(av[i]) + 1;
	}

	str = (char *)malloc(tl * sizeof(char));

	if (!str)
	{
		return NULL;
	}

	position = 0;

	for(i = 0; i < ac; i++)
	{
		int length = strlen(av[i]);
		memcpy(str + position, av[i], length);
		position += length;
		str[position] = '\n';
		position++;
	}

	str[position - 1] = '\0';

	return str;
}
