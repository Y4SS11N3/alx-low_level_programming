#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	memset(hash_table->array, 0, size * sizeof(hash_node_t *));

	return (hash_table);
}

