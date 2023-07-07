#include "main.h"

/**
 * get_endianness - determines if a machine uses little or big endian
 * byte ordering
 *
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	else
		return (0);
}
