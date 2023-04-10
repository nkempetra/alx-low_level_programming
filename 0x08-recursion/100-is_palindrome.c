#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string to check
 * Return: 1 if string is a palindrome, 0 if string is not a palindrom
*/

int is_palindrome(char *s)
{
int i = 0;
int len = find_strlen(s);

if (!(*s))
	return (1);

return (check_palindrome(s, len, i));
}

/**
 * find_strlen - Returns the length of a string.
 * @s: string
 * Return: string length.
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


