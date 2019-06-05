#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_print - print hash table
 *@ht: hash table being printed
 *
 *Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	if (!(ht))
		exit(EXIT_FAILURE);
	printf("{");
	print_table(ht);
	printf("}\n");
}
/**
 *print_table - print index at which key exists
 *@ht: hash table being searched
 *
 *Return: Void.
 */
void print_table(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 1;

	for (i = 0; i <= ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag == 0)
				printf(", ");
			flag = 0;
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
}
