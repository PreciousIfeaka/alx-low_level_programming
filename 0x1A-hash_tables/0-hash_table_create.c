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

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_table_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}