#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: The key to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array
 * of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key); /* Get hash value from djb2 algorithm */
	return (hash % size); /* Return the index by modulo operation */
}

