#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *curr, *t;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				t = curr->next;
				free(curr->key);
				free(curr->value);
				free(curr);
				curr = t;
			}
		}
	}
	free(hd->array);
	free(hd);
}
