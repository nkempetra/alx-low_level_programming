#include "main.h"

/*
 * print_char -print a char to stdout
 * @args: Variadic parameter
 *
 * return: number of char printed
 */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		write(1, &c, 1);
		return (count);
	}

	return (0);
}
