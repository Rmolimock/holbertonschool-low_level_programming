#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - checks the number of elements in a list
 *@h: list checked for length
 *
 *Return: Number of elements (length) of h.
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
