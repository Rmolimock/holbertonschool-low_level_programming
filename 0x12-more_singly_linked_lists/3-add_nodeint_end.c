#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_nodeint_end - Adds a new node to the end of a linked list
 *@head: Linked list in which to add a node
 *@n: integer to be included in new node
 *
 *Return: Success - pointer to new node, Fail - NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		new->next = NULL;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
