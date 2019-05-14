#include <stdlib.h>
#include "lists.h"

/**
 *create_node - create new node for D-linked list
 *@n: value to be inserted into new node
 *@new: new node
 *
 *Return: new node for success, NULL for failure
 */
dlistint_t *create_node(dlistint_t *new, int n)
{
	new = malloc(sizeof(dlistint_t));
	if (new)
		new->n = n;
	return (new);
}

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
	dlistint_t *current = NULL, *new = NULL;

	new = create_node(new, n);
	if (!new || !h)
	{
		if (new)
			free(new);
		return (NULL);
	}
	current = *h;
	if (!idx)
	{
		if (current)
		{
			new->next = current;
			current->prev = new;
		}
		else
			new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	for (idx--; current; current = current->next, idx--)
	{
		if (!idx)
		{
			new->prev = current;
			new->next = current->next;
			if (new->next)
				new->next->prev = new;
			current->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
