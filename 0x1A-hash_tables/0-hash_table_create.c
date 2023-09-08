#include "hash_tables.h"

/**
 * hash_table_create - Function that creates an empty hash table
 * @size: Size of the array to be created inside table
 * Return: Pointe to the hash table (Success), NUll if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
