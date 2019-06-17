#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 *insertion_sort_list - insertion sort algorithm applied to linked list
 *@list: the list to be sorted
 *
 *Return: Void.
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *cur;

	if (!list || !(*list)->next)
		return;
	cur = *list;
	for (cur = *list; cur; cur = cur->next)
	{
		tmp = cur; /* save position in outer loop */
		/*while nodes are out of order, traverse backwards untilNULL*/
		while (tmp->prev && tmp->prev->n > tmp->n)
			swap(tmp->prev, tmp, list);
	}
}
/**
 *swap - swap nodes of a linked list then print list
 *@head: head of the list
 *@b: first node to be swapped
 *@a: second node to be swapped
 *
 *Return: Void.
 */
void swap(listint_t *b, listint_t *a, listint_t **head)
{
	if (a->next != NULL)
		a->next->prev = b;
	b->next = a->next;
	a->next = b;
	a->prev = b->prev;
	if (b->prev == NULL)
		*head = a;
	else
		b->prev->next = a;
	b->prev = a;
	print_list(*head);
}
