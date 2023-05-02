#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Double pointer to head node of list.
 * Return: Pointer to new head node of reversed list.
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
