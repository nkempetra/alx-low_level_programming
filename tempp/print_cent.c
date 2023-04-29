#include "main.h"

/*
 * print_cent -print a % to stdout
 * @args: Variadic parameter
 *
 * return: number of char printed
 */

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
