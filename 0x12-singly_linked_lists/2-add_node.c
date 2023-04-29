#include "lists.h"

/**
 * add_node - add new node at the beginning
 * @head: head of the list
 * @str: string data of the list to be added
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	char *dup_str;
	int len;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = dup_str;
	n->len = len;
	n->next = *head;

	*head = n;

	return (n);
}
