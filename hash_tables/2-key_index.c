#include "hash_tables.h"

/**
 * key_index - simpler than you'd think
 * @key: to the index
 * @size: of the array
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
