#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes hash table
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp, *temp2;

	i = 0;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for(i = 0 ; i < ht->size ; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	}
	free(ht->array);
	free(ht);
}
