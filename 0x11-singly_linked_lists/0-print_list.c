#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints the contents of a list of list_t structs
 *@h: pointer to the first struct to print. Everything after is printed
 *
 *Return: Number of structs (nodes) in the list.
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

		while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		c++;
	}
	return (c);
}
