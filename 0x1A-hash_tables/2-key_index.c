#include "hash_tables.h"

/**
 *key_index -  a function that gives you the index of a key
 *@key: key to hash
 *@size: size of the array of the hash table
 *Return: index of the provided key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t n;

	n = hash_djb2(key);

	return (n % size);
}
