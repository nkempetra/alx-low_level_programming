#include "lists.h"

/**
 * add_node_end - new node to the end of a linked list
 * @head: double pointer to the head of a linked list
 * @str: string to be copied to str member of the linked list
 * Return: pointer to the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *n, *last;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = dup;
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = n;
	}

	return (*head);
}
