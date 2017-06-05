#include "hash_tables.h"
/**
 * hash_table_print - prints a hash_table_t
 *
 * @ht: hash_table_t to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *formatStr;

	if (!ht)
		return;
	printf("{");
	formatStr = "";
	for (i = 0 ; i < ht->size ; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("%s", formatStr);
			printf("'%s': ", temp->key);
			printf("'%s'", temp->value);
			formatStr = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
