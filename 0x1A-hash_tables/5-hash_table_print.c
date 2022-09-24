#include "hash_tables.h"

/**
 * hash_table_print - prints the elements in a hash table
 * @ht: a pointer to the hash table
 *
 * Return: nothing(void function)
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i, put_comma = 0;

	if (ht == NULL)
		return;
	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (put_comma == 1)
				printf(", ");
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			put_comma = 1;
		}
	}
	printf("}\n");
}
