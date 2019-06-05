#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *hash_djb2 - implement the djb2 algorithm
 *@str: string to be hashed
 *
 *Return: hash value of string str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
