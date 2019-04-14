#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - frees a linked list and it's nodes, sets head to NULL
 *@head: linked list to be freed
 *
 *Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
