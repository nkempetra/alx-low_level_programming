#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: a double pointer to the starting node of listint_t list
 * @index: the position of the element of the listint_t list to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *prev;

	if (!head || !*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index && tmp)
	{
		i++;
		prev = tmp;
		tmp = tmp->next;
	}

	if (!tmp)
		return (-1);

	prev->next = tmp->next;
	free(tmp);

	return (1);
}
