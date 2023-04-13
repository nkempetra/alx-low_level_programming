#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 * Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *ptr_c, *f;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		f(ptr);
		return (NULL);
	}

	ptr_c = ptr;
	m = malloc(sizeof(*ptr_c) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = m;

	for (i = 0; i < old_size && i < new_size; i++)
		f[i] = *ptr_c++;

	free(ptr);
	return (m);
}
