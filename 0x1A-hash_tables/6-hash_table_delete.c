#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: Has table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = ht->array[0], *deleter;
	unsigned int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		deleter = tmp;
		while (deleter != NULL)
		{
			free(deleter->key);
			free(deleter->value);
			deleter = deleter->next;
			free(tmp);
		}
		i++;
		tmp = ht->array[i];
	}
	free(ht->array);
	free(ht);
}
