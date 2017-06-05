#include "hash_tables.h"

/**
 * hash_table_set - sets a value to a key in a hash_table_t
 * @ht: hash_table_t
 * @key: key for bucket
 * @value: value for bucket
 * Return: Returns 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hshIndex;
	hash_node_t *node, *temp;

	if (!ht || !key || !value)
		return (0);
	hshIndex = key_index((unsigned char *)key, (ht->size));
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	if (ht->array[hshIndex])
	{
		temp = ht->array[hshIndex];
		while (temp && strcmp(temp->key, key) != 0)
			temp = temp->next;
		if (temp && strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[hshIndex];
	ht->array[hshIndex] = node;

	return (1);
}
