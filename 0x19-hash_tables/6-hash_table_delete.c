#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_delete - delete hash table
 *@ht: hash table to be deleted
 *
 *Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	if (!(ht))
		exit(EXIT_FAILURE);
	delete_table(ht);
	free(ht->array);
	free(ht);
}
/**
 *delete_table - frees key value pairs of hash table
 *@ht: hash table being freed
 *
 *Return: Void.
 */
void delete_table(const hash_table_t *ht)
{
	hash_node_t *tmp;
	hash_node_t *tmp2;
	unsigned long int i;

	for (i = 0; i <= ht->size; i++)
	{
		tmp = ht->array[i];
		tmp2 = tmp;
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp2->next;
			tmp2 = tmp;
		}
	}
}
