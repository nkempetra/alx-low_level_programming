#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: a double pointer to the linked list's head.
 *
 * Return: returns the integer value of the head node that was removed.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	/* Save the head node to a temporary pointer. */
	temp = *head;

	/* Move head to the next node. */
	*head = temp->next;

	/* Save the integer value of the removed head node. */
	n = temp->n;

	/* Deallocate memory of the removed head node. */
	free(temp);

	/* Return the integer value. */
	return (n);
}
