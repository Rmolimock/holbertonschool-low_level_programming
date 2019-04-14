#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts new node at given position of linked list
 *@head: linked list in which to insert new node
 *@idx: position at which to insert new node
 *@n: integer value to be store in new node
 *
 *Return: Success - ddress of new node, Fail - NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	if (idx > 1)
	{
		temp = *head;
		for (p = 0; p < (idx - 1) && temp; p++)
		{
			temp = temp->next;
		}
		node->next = temp->next;
		temp->next = node;
	}
	else if (idx == 1)
	{
		temp = *head;
		node->next = temp->next;
		temp->next = node;
	}
	else if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	node->n = n;
	return (node);
}
