#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint - free the doubly linked list
 *@head: pointer to head of the list
 *
 *Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
	{
		tmp = head;
		while (tmp->next)
		{
			if (tmp->prev)
				free(tmp->prev);
			tmp = tmp->next;
		}
		free(tmp->prev);
		free(tmp);
	}
}
