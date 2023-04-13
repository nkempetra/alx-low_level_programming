#include "main.h"

/**
 * _strdup - allocates memory for a copy of a given string 
 * @str: the string to be copied
 * Return: pointer to the newly allocated space, or NULL if error
 */

(char **str_concat(char *s1, char *s2)).

char *str_concat(char *s1, char *s2)
{
	char *cal;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	*cal = (char *)malloc(len1 + len2 + 1);
	if (cal == NULL)
		return NULL;

	strcpy(cal, s1);
	strcat(cal, s2);

	return cal;
}

