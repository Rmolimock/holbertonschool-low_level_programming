#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_nodeint - adds new node to the beginning of a list
 *@head: pointer to the pointer to the list
 *@n: integer to be included in new node
 *
 *Return: Success - Pointer to the new node. Fail - NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

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
		new->next = *head;
		*head = new;
	}
	return (new);
}
