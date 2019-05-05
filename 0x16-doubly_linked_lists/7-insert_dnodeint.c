#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node at index of linked list
 *@h: double pointer to head of the list
 *@idx: index at which to insert node
 *@n: value of new node
 *
 *Return: Pointer to new node for success, NULL for failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	size_t len = 0;

	if (!*h && idx)
		return (NULL);
	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (current)
	{
		if (len == idx)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
		len++;
	}
	return (NULL);
}
