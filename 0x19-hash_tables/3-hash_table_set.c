#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 *hash_table_set - add an element to hash table
 *@ht: hash table to be added to
 *@key: key to be associated with value
 *@value: value to be associated with key
 *
 *Return: 1 for success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	int i;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)(key), ht->size);
	node = ht->array[index];
	i = handle_collisions(ht, key, value, index);
	if (i != 2)
		return (i);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	return (1);
}
/**
 *handle_collisions - checks for an existing key and updates data if found
 *@ht: hash table being added to
 *@key: key to be associated with value
 *@value: value to be associated with key
 *@index: index at which key is stored
 *
 *Return: 1 if collision found and handled, else 2 for error.
 */
int handle_collisions(hash_table_t *ht, const char *key, const char *value,
unsigned long int index)
{
	hash_node_t *tmp;

	tmp = ht->array[index];
	while (tmp)
	{
		if (!(strcmp(tmp->key, key)))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	return (2);
}
