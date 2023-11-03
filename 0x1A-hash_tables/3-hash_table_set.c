 #include "hash_tables.h"

/**
 * hash_table_set - Function that adds item in a hash table
 * @ht: the table
 * @key: key of the item
 * @value: value of the item
 * Return: 1 for success 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;
	hash_node_t *newTable, *tmp;

	if (!ht || !key || !(*key))
		return (0);
	newTable = malloc(sizeof(*newTable));
	if (!newTable)
		return (0);
	newTable->key = strdup((char *)key);
	newTable->value = strdup(value);
	newTable->next = NULL;
	x = key_index((unsigned char *)key, ht->size);
	if (!(ht->array[x]))
	{
		ht->array[x] = newTable;
	}
	else
	{
		tmp = ht->array[x];
		while (tmp && strcmp(tmp->key, newTable->key) != 0)
			tmp = tmp->next;
		if (tmp)
		{
			free(tmp->value);
			tmp->value = newTable->value;
			free(newTable->key);
			free(newTable);
			return (1);
		}
		tmp = ht->array[x];
		newTable->next = tmp;
		ht->array[x] = newTable;
	}

	return (1);
}
