#include "hash_tables.h"
/**
 * key_index - A Function that gives the index of a key.
 * @key: The Key of the hash tables
 * @size: The size of the array of the hash table
 * Return: Returns the index at which the key/value pair should
 * be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashIndex = hash_djb2(key);

	return (hashIndex % size);
}
