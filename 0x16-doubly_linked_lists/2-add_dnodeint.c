#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint - adds node to beginning of doubly linked list
 *@head: double pointer to head of the list
 *@n: value for new node
 *
 *Return: Address of new element for success, NULL for failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
