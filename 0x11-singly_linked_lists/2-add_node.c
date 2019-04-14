#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - add a new node to the end of a linked list
 *@head: The new start of the linked list
 *@str: string to be stored in new node
 *
 *Return: Success: pointer to new node, Failure: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	if (*head == NULL)
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
