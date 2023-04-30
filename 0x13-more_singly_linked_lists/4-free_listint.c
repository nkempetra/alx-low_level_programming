#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head node 
 * */

void free_listint(listint_t *head)
{
	listint_t *temp_node;
	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
