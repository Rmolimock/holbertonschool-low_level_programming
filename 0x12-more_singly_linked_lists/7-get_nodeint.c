#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - finds a given node in a linked list
 *@head: list in which to find node
 *@index: index of node to be found (0 based)
 *
 *Return: Pointer to the specified node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	for (i = 0; i < index && temp->next; i++)
		temp = temp->next;
	return (temp);
}
