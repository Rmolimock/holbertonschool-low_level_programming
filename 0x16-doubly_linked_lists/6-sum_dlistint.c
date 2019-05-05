#include <stdlib.h>
#include "lists.h"

/**
 *sum_dlistint - find sum of values in doubly linked list
 *@head: pointer to head of the list
 *
 *Return: sum for success, 0 otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
