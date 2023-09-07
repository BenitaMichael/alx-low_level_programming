#include "./hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: Pointer to the hash table to print
 * Description: Key/value pairs are printed in the order
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned char comma_flag = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
