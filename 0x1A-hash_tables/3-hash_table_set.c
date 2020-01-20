#include "hash_tables.h"
/***
 *
 *
 *
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot;
	hash_node_t *entry, *tmp;
	hash_node_t *new_entry;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	slot = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[slot];
	if (entry == NULL)
	{
		entry = malloc(sizeof(entry));
		entry->key = strdup(key);
		entry->value = strdup(value);
		entry->next = NULL;
	}
	else
	{
		for (tmp = entry; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->key);
				tmp->key = strdup(value);
				break;
			}
		}
		new_entry = malloc(sizeof(hash_node_t));
		new_entry->key = strdup(key);
		new_entry->value = strdup(value);
		new_entry->next = ht->array[slot];
		ht->array[slot] = new_entry;
	}
	return (1);
}
