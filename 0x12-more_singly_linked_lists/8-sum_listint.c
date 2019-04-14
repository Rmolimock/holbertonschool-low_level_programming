#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - calculates the sum of all integers in nodes of a linked list
 *@head: list from which to find sum of integers
 *
 *Return: sum of all integers in nodes of a linked list.
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *temp;

	temp = head;
	while (temp)
	{
		n += temp->n;
		temp = temp->next;
	}
	return (n);
}
