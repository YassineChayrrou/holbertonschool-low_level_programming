#include "lists.h"
/**
  *dlistint_len - returns number of nodes in a linked list
  *@h: pointer to node of linked list
  *Return: length of linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
