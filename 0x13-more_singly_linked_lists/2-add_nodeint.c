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
	listint_t *new_node;

	if (head == NULL) /* check for invalid input */
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t)); /* allocate memory for the new node */
	if (new_node == NULL) /* check for memory allocation error */
	{
		return (NULL);
	}

	new_node->n = n; /* set value of the new node */
	new_node->next = head; /* make new node point to the current head node */

	head = new_node; /* set head pointer to point to the new node */

	return (new_node); /* return address of the new node */
}
