#include "hash_tables.h"

/**
 * hash_table_set - Set a key - value node at index
 * @ht: Hash table
 * @key: The key to be add
 * @value: value to be add
 * Return: 1 if success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_idx;
	hash_node_t *tmp;
	char *updated_value;


	if (!ht || !key || strcmp(key, "") == 0 || !value || !ht->array)
	return (0);
	k_idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[k_idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			updated_value = strdup(value);
			if (!updated_value)
				return (0);
			free(tmp->value);
			tmp->value = updated_value;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = ht->array[k_idx];
	ht->array[k_idx] = malloc(sizeof(hash_node_t));
	if (!ht->array[k_idx])
	{
		ht->array[k_idx] = tmp;
		return (0);
	}
	ht->array[k_idx]->key = strdup(key);
	ht->array[k_idx]->value = strdup(value);
	ht->array[k_idx]->next = tmp;
	return (1);
}
