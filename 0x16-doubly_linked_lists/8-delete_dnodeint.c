#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 *
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;

	if (!head)
		return (-1);
	cur = *head;
	if (!index)
	{
		if (cur)
		{
			if (cur->next)
			{
				*head = cur->next;
				(*head)->prev = NULL;
			}
			else
				*head = NULL;
			free(cur);
			return (1);
		}
		return (-1);
	}
	for (; cur; cur = cur->next, index--)
	{
		if (!index)
		{
			if (cur->next)
			{
				cur->prev->next = cur->next;
				cur->next->prev = cur->prev;
			}
			else
				cur->prev->next = NULL;
			free(cur);
			return (1);
		}
	}
	return (-1);
}
