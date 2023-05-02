#include "lists.h"

/**
 * _ra - This function reallocates memory for an array of pointers
 * to the nodes in a linked list.
 * @list: The old list to append.
 * @size: Size of the new list (always one more than the old list).
 * @new: New node to add to the list.
 *
 * Return: Pointer to the new list.
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
    listint_t **newlist;
    size_t i;

    newlist = malloc(size * sizeof(listint_t *));
    if (newlist == NULL)
    {
        free(list);
        exit(98);
    }
    for (i = 0; i < size - 1; i++)
        newlist[i] = list[i];
    newlist[i] = new;
    free(list);
    return (newlist);
}

/**
 * free_listint_safe - This function frees a listint_t linked list.
 * @head: Double pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t free_listint_safe(listint_t **head)
{
    size_t i, num = 0;
    listint_t **list = NULL;
    listint_t *next;

    if (head == NULL || *head == NULL)
        return (num);
    while (*head != NULL)
    {
        for (i = 0; i < num; i++)
        {
            if (*head == list[i])
            {
                *head = NULL;
                free(list);
                return (num);
            }
        }
        num++;
        list = _ra(list, num, *head);
        next = (*head)->next;
        free(*head);
        *head = next;
    }
    free(list);
    return (num);
}
