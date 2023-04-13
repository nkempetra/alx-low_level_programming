#include "main.h"

/**
 * *create_array - returns a pointer to the newly created array.
 * @size: size of array
 * @c: character to input
 *
 * return: NULL if size = 0/fails or pointer to array if success
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
