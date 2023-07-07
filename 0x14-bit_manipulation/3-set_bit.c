#include "main.h"

/**
 * set_bit - sets a bit at a specific position to 1
 * @n: pointer to the number to be modified
 * @index: position of bit to set
 *
 * Return: 1 if successful, -1 if there was an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}
