#include "main.h"

/**
*_strlen_recursion - returns the length of a string
*@s: string to find length of
*Return: length of string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
	_strlen_recursion(s + 1);
	return (1);
}
}

