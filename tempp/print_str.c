#include "main.h"

/*
 * print_str -print a string single char per time to stdout
 * @args: Variadic parameter
 *
 * return: number of char printed
 */

int print_str(va_list args)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);

	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}

	return (count);
}
