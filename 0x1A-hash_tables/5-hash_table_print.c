#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = ht->array[0];
	unsigned int i = 0, coma = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	while (i < ht->size)
	{
		while (tmp != NULL)
		{
			if (coma != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			coma++;
		}
		i++;
		tmp = ht->array[i];
	}
	printf("}\n");
}
