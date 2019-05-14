#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at given index
 *@head: head of doubly linked list
 *@index: index at which to delete
 *
 *Return: 1 for success, -1 for failure
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
