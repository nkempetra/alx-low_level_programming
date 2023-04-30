#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a listint_t linked list.
 * @head: a pointer to the head node of a listint_t list, or NULL.
 *
 * Return: the sum of all the data of the listint_t list.
*/

int sum_listint(listint_t *head)
{
int sum;

for (sum = 0; head; head = head->next)
sum += head->n;

return (sum);
}
