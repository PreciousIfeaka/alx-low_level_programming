#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table of a given size
 * @size: the size of the array
 *
 * Return: a pointer to the hash table or NULL if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t) * size);

	if (!table)
		return (NULL);
	
	return (table);
}
