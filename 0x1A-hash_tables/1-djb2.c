#include "hash_tables.h"
/**
 *hash_djb2 - hashes strings according to djb2 algorithm
 *@str: key
 *Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{

	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	hash = hash % hash_t->size;
	return (hash);
}
