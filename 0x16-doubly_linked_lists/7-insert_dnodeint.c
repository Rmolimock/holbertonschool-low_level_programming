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
 *insert - insert node after current
 *@current: pointer to node before new
 *@new: new node to insert
 *
 *Return: new node for success, NULL on failure
 */
dlistint_t *insert(dlistint_t *current, dlistint_t *new)
{
	if (current->next)
	{
		new->next = current->next;
		new->prev = current->next->prev;
		current->next->prev = new;
		current->next = new;
		return (new);
	}
	new->next = NULL;
	current->next = new;
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
	dlistint_t *current, *new = NULL, *ret;
	size_t count;

	new = create_node(new, n);
	if (!new)
		return (NULL);
	if (!*h)
	{
		if (idx == 0)
		{
			new->next = NULL;
			*h = new;
			return (new);
		}
		else
			return (NULL);
	}
	current = *h;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	for (count = 0; current->next && count < idx; count++)
	{
		if (count == idx - 1)
		{
			ret = insert(current, new);
			return (ret);
		}
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
	return (NULL);
}
