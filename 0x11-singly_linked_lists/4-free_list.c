#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_list - frees a list and all of it's nodes
 *@head: pointer to the beginning of the list
 *
 *Return: Void.
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
