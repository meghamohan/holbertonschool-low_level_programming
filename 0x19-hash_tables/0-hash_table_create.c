#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * @size: size of the table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	hashtable = NULL;
	if (!size)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
		hashtable->array[i] = NULL;
	hashtable->size = size;

	return (hashtable);
}
