#include "hash_tables.h"

/**
 * key_index - a function that fetches the index of a key
 * @key: key pointer
 * @size: size of the array
 *
 * Return: The array index where the key-value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long index = (hash_djb2(key) % size);

	return (index);
}
