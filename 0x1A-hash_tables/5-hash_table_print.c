#include "hash_tables.h"
/**
 * hash_table_print - prints a hashtable
 * @ht: hash_table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int comma_flag = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma_flag)
				printf(", ");

			node = ht->array[i];

			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			comma_flag = 1;
		}
	}

	printf("}\n");
}
