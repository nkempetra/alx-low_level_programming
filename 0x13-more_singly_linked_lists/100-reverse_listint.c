#include "lists.h"

/*
 * reverse_listint - reverses a listint_t linked list.
 * @head: a double pointer to the starting node of the
 * listint_t linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->current == NULL)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		current = (*head)->current;
		(*head)->current = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (*head);
}
