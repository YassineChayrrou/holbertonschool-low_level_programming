#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *
  *
  *
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *store;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	store = *head;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next  = store;
	}
	else if (store->next)
	{
		new_node->next = store->next;
		store->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		store->next = new_node;
	}
	return (new_node);

}
