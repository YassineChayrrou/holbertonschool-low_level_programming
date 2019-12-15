#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a node at specific index
 *@h: double pointer to head node of LL
 *@idx: index of insertion
 *@n: new node data
 *Return: newNode or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newNode, *store;

	if (h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	store = *h;
	for (i = 0; store && i < idx; i++)
	{
		store = store->next;
		if (store == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = store;
		*h = newNode;
	}
	else if (store->next)
	{
		newNode->next = store;
		newNode->prev = store->prev;
		store->prev->next = newNode;
	}
	else
	{
		newNode->next = NULL;
		newNode->prev = store;
		store->next = newNode;
	}
	printf("this is a check: %d\n", store->n);
	return (newNode);
}
