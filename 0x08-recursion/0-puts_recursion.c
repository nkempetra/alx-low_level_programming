#include "main.h"
/**
 *_puts_recursion - prints a string followed by a new line
 *@s: char to be printed
 *@return: returns void
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

i
