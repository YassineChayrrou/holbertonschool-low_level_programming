#include "hash_tables.h"
/**
  *hash_table_create - creates a hash table of size
  *@size: hashtabe size
  *Return: pointer to hashtable or NULL
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int c = 0;
	hash_table_t *hash_t = NULL;

	if (size == 0)
		return (NULL);
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	while (c < size)
	{
		hash_t->array[c] = NULL;
		c++;
	}
	return (hash_t);
}
