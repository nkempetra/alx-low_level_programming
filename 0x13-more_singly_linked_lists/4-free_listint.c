#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head node 
 * */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
