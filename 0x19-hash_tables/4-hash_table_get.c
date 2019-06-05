#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *hash_table_get - finds value of key in ht
 *@ht: hash table being searched
 *@key: name associated with value
 *
 *Return: the value associated with key, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!(ht) || !(key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
		return (search_node(key, ht->array[index]));
	return (NULL);
}
/**
 *search_node - search linked list node for key
 *@key: name associated with value
 *@node: linked list being searched
 *
 *Return: NULL if failed, else "key:value"
 */
char *search_node(const char *key, const hash_node_t *node)
{
	while (node)
	{
		if (!(strcmp(key, node->key)))
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
