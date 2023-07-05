#include "lists.h"

/**
 * listint_len - count the number of elements in a linked list.
 * @h: head node
 *
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t j;

	temp = h;
	for (j = 0; temp; j++)
	{
		temp = temp->next;
	}
	return (j);
}
