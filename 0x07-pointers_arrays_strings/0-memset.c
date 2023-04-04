#include "main.h"

/**
 * memset() - fills s with n byte with b
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: byte
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
