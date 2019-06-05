#include "hash_tables.h"

/**
 *key_index - generate an index at which to store key and value
 *@key: key which determines the key index along with size
 *@size: size of the hash table
 *
 *Return: index of the key value pair for a hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
