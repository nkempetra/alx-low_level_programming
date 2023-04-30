#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Head node. 
 * */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *currentNode = *head;
	listint_t *nextNode;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}

	*head = NULL;
}
