#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *listint_len - counts number of elements in a linked list
 *@h: list of elements to count
 *
 *Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
