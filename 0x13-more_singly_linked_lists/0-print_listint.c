#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t j;

	temp = h;
	for (j = 0; temp; j++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (j);
}
