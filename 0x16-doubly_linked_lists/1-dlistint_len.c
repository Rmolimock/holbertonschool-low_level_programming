#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - find number of elements in doubly linked list
 *@h: pointer to head of the list
 *
 *Return: number of elements in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current;

	current = h;
	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
