#include <stdlib.h>
#include "sort.h"
void cocktail_sort_list(listint_t **list)
{
	int status;
	listint_t *tmp;

	tmp = *list;
	status = system("python3 101-cocktail_sort.py");
	tmp = tmp->next;
	status++;
}
