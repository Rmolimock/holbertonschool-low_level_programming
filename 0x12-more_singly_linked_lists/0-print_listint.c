#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_listint - prints all the elements of a list
 *@h: list from which to print elements
 *
 *Return: Success: Number of nodes in list, Failure: NULL.
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
