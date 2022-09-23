#include "hash_tables.h"

/**
 * hash_table_get - this function retrieves the value of a given key
 * @ht: the hash table pointer
 * @key: key pointer
 *
 * Return: value or NULL if key doesn't exist
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int size, index;
	char *value;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (!size || !index)
		return (NULL);

	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	value = strdup(node->value);

	return (value);
}
