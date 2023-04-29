#include "lists.h"

/**
 * print_list - print all the elements of a struct list
 * @h: struct
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int j;

	for (j = 0; h != NULL; i++)
	{
		/*Check that string per node is not null before traversing & printing*/
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (j);
}
