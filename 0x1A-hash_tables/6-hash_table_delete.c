#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: Pointer to the given hash table
 *
 * Return: Return void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp, *cursor;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		cursor = ht->array[x];
		while (cursor)
		{
			temp = cursor->next;
			free(cursor->key);
			free(cursor->value);
			free(cursor);
			cursor = temp;
		}
	}
	free(ht->array);
	free(ht);
}
