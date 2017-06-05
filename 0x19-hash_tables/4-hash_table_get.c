#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - returns a value associated with a key in a ht
 * @ht: hash_table_t we're working with
 * @key: key to search for
 * Return: Returns value, or NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int getIndex;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	getIndex = hash_djb2((unsigned char *)key);
	node = ht->array[getIndex % (ht->size)];
	while ((node != NULL) && (strcmp(node->key, key) != 0))
		node = node->next;
	if (!node)
		return (NULL);
	return (node->value);
}
