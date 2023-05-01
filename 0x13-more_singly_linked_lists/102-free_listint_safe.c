#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely to prevent infinite loops
*
* @head: listint_t double pointer
*
* Return: size_t
*/

size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	int diff;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	while (current != NULL)
	{
		count++;
		diff = current - current->next;

		if (diff > 0)
		{
			next = current->next;
			free(current);
			current = next;
		}
		else
		{
			free(current);
			*head = NULL;
			break;
		}
	}

	return (count);
}
