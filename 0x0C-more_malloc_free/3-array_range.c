#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integer

 * @min: first value of the array.
 * @max: last value of the array.
 *
 * Return: NULL If min > max or function fails else, a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
