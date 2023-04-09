#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string to check
 * Return: 1 if the given string is a palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
int index = 0;
int len = find_strlen(s);

if (!(*s))
	return (1);

return (check_palindrome(s, len, index));
}

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
*/

int find_strlen(char *s)
{
int len = 0;

if (*(s + len))
{
len++;
len += find_strlen(s + len);
}

return (len);
}


