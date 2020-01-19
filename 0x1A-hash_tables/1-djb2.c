#include "hash_tables.h"
/**
 *hash_djb2 - hashes strings according to djb2 algorithm
 *@str: key
 *Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int c;

	hsh = 5381;
	while ((c = *str++))
		hsh = ((hsh << 5) + hsh) + c;  /* hsh * 33 + c */

	return (hsh);
}
