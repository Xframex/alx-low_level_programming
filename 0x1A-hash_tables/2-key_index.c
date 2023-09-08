#include "hash_tables.h"

/**
 * key_index - Function that using de djb2 gives a nice index for the key
 * @key: The key
 * @size: Size of the array of the hash table
 * Return: An index option for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
