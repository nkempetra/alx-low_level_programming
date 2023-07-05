#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the first element of the linked list
 * @index: the index of the node to return
 *
 * Return: If the node does not exist, return NULL. Otherwise, return the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head ? head : NULL);
}
