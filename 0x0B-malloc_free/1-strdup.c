#include "main.h"

/**
 * _strdup() - returns a pointer to a new string
 * @str: existing string
 * 
 * return: NULL if fail  else a pointer to the existing string
 */

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
       	return NULL;
	copy = malloc(strlen(str) + 1);
	
	if (copy == NULL)
	return NULL;
	
	strcpy(copy, str);
	return copy;
}
