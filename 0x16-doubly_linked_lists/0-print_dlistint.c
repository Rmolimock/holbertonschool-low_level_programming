#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - print doubly linked list elements
 *@h: pointer to head of the list
 *
 *Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
