#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *current = head;

    /* Traverse the list and add up the data of each node */
    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }

    return sum;
}

