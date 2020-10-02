#include "hash_tables.h"

/**
 * key_index - find index of a key
 * @size: array`s size
 * @key: Name of the key
 * Return: key`s index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
