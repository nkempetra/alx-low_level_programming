#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head node
 * 
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
