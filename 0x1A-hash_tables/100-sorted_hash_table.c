#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table.
 * @size: size of new sorted hash table.
 *
 * Return: pointer to the new sorted hash table, otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htab;
	unsigned long int i;

	htab = malloc(sizeof(shash_table_t));
	if (htab == NULL)
		return (NULL);

	htab->size = size;
	htab->array = malloc(sizeof(shash_node_t *) * size);
	if (htab->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htab->array[i] = NULL;
	htab->shead = NULL;
	htab->stail = NULL;

	return (htab);
}

/**
 * shash_table_set - adds an element to a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key to add.
 * @value: value associated with key.
 *
 * Return: On Success - 1, Otherwise - 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *curr, *t;
	char *cp_value;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	t = ht->shead;
	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = cp_value;
			return (1);
		}
		t = t->snext;
	}

	curr = malloc(sizeof(shash_node_t));
	if (curr == NULL)
	{
		free(cp_value);
		return (0);
	}
	curr->key = strdup(key);
	if (curr->key == NULL)
	{
		free(cp_value);
		free(curr);
		return (0);
	}
	curr->value = cp_value;
	curr->next = ht->array[i];
	ht->array[i] = curr;

	if (ht->shead == NULL)
	{
		curr->sprev = NULL;
		curr->snext = NULL;
		ht->shead = curr;
		ht->stail = curr;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		curr->sprev = NULL;
		curr->snext = ht->shead;
		ht->shead->sprev = curr;
		ht->shead = curr;
	}
	else
	{
		t = ht->shead;
		while (t->snext != NULL && strcmp(t->snext->key, key) < 0)
			t = t->snext;
		curr->sprev = t;
		curr->snext = t->snext;
		if (t->snext == NULL)
			ht->stail = curr;
		else
			t->snext->sprev = curr;
		t->snext = curr;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   key in a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *curr;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	curr = ht->shead;
	while (curr != NULL && strcmp(curr->key, key) != 0)
		curr = curr->snext;

	return ((curr == NULL) ? NULL : curr->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->shead;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->snext;
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->stail;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *curr, *t;

	if (ht == NULL)
		return;

	curr = ht->shead;
	while (curr)
	{
		t = curr->snext;
		free(curr->key);
		free(curr->value);
		free(curr);
		curr = t;
	}

	free(head->array);
	free(head);
}
