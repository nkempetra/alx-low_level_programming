#include "lists.h"

/**
 * list_len - return the number of elements in linked list
 * @h: instance of struct
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int j;

	for (j = 0; h; j++)
	{
		h = h->next;
	}
	return (j);
}
