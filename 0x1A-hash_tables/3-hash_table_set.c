#include "hash_tables.h"

/**
 * hash_table_set - inserts an item to the hash table
 * @ht: hash table pointer
 * @key: The key that holds a corresponding value
 * @value: The value to be inserted
 *
 * Return: 1 if successful or 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *node;
	unsigned long int index, size;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	node = ht->array[index];

	if (node == NULL)
	{
		newnode = newnode_create(key, value);
		if (!newnode)
			return (0);
		ht->array[index] = newnode;
		return (1);
	}
	/*This block replaces the value of a node if it exists*/
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	/*else create a new node if the key doesn't exist*/
	newnode = newnode_create(key, value);

	if (!newnode)
		return (0);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}

/**
 * newnode_create - creates a new node
 * @key: the key pointer
 * @value: the value pointer
 *
 * Return: pointer to the new node 0n success, NULL on failure
 */

hash_node_t *newnode_create(const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));

	if (!newnode)
		return (NULL);
	newnode->value = strdup(value);
	newnode->key = strdup(key);
	newnode->next = NULL;

	return (newnode);
}
