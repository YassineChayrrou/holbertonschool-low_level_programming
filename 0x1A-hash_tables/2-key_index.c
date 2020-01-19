#include "hash_tables.h"
/**
  *key_index - gives index of key in hashtable
  *@key: string value of key in hashtable
  *@size: hashtable size
  *Return: index
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
