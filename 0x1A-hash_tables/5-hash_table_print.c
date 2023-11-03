#include "hash_tables.h"

/**
 * hash_table_print - Function that Print all the hash table
 * @ht: Pointer to the hash table
 *
 * Return: Return void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	int counter = 0;
	hash_node_t **arry = NULL;
	hash_node_t *nodes = NULL;

	if (!ht || !ht->array)
		return;
	arry = (*ht).array;
	printf("{");

	for (; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			counter++;
			if (counter == 2)
				printf(", "), counter = 1;
			printf("'%s': '%s'", arry[x]->key, arry[x]->value);
			nodes = arry[x]->next;
			if (nodes)
			{
				printf(", ");
				for (; nodes; nodes = (*nodes).next)
				{
					printf("'%s': '%s'", (*nodes).key, nodes->value);
					if (nodes->next)
						printf(", ");
				}
			}
		}
	}
	printf("}\n");
}
