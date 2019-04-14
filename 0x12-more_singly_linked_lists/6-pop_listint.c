#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes head node of linked list, then returns head's data
 *@head: pointer to a pointer to the head of a linked list
 *
 *Return: Success - data of head node, Fail - 0;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;


	temp = *head;
	if (temp->n)
	{
		free(*head);
		return (temp->n);
	}
	else
		return (0);
}
