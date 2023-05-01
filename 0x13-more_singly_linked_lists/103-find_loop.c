#include "lists.h"

/**
 * find_listint_loop - Finds loop in a linked list
 * @head: Pointer to the head node of the list
 *
 * Return: Pointer to the node where the loop starts, NULL if no loop
 * is found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	slow_ptr = head;
	fast_ptr = head;

	if (!head)
	{
		return NULL;
	}

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;

			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			return slow_ptr;
		}
	}

	return NULL;
}

