#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: The size of the array
 * Return: Returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;

	hashTable = malloc(sizeof(hash_table_t));
	hashTable->array = malloc(sizeof(hash_table_t **) * TABLE_SIZE);
	for (size = 0; size < TABLE_SIZE; size++)
		hashTable->array[size] = NULL;
	return (hashTable);
}
