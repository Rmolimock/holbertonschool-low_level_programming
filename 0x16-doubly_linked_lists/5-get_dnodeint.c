#include <stdlib.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - get node at given index of doubly linked list
 *@head: pointer to head of the list
 *@index: index of requested node
 *
 *Return: Pointer to requested node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *current;

	if (!head)
		return (NULL);
	current = head;
	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	if (index > i)
		return (NULL);
	return (current);
}
