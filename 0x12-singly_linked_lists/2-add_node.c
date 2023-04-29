#include "lists.h"

/**
 * add_node - add new node at the beginning
 * @head: head of the list
 * @str: string data of the list to be added
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	new = malloc(sizeof(list_t));
	if (pus == NULL)
	{
		return (NULL);
	}
	pus->str = strdup(str);
	if (pus->str == NULL)
	{
		free(pus);
		return (NULL);
	}
	pus->len = _strlen(str);
	pus->next = *head;
	*head = pus;
	return (*head);
}

/**
 * _strlen - function to calculate the length of a const char string
 * @s: string to work with
 * Return: length of string.
 */

int _strlen(const char *s)
{
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	return (j);
}
