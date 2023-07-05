#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head node of the list
 * @n: integer value to be added to the new node
 *
 * Return: address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
