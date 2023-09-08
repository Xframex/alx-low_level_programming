#include "hash_tables.h"

/**
 * hash_table_get - Retrieves retrieves a value associated with a key
 * @ht: Hash table
 * @key: The key to look for
 * Return: Value if success else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int k_idx;

	if (!ht || !key || !ht->array)
	return (NULL);

	k_idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[k_idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
