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

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: string to check.
 * @len: length of s.
 * @i: current index of iteration.
 *
 * Return: 1 If string is a palindrome.
 *         0 If string is not a palindrome.
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}
