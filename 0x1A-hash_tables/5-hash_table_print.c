#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to the hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			curr = ht->array[i];
			while (curr != NULL)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				curr = curr->next;
				if (curr != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
