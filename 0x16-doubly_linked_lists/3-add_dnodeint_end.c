#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint_end - add new node to end of doubly linked list
 *@head: double pointer to head of the list
 *@n: value of new node
 *
 *Return: Address of new node on success, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

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
		tmp = *head;
		new->next = NULL;
		while (tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
