#include <stdio.h>
#include "lists.h"
/**
  *print_listint -prints elements of list
  *@h: pointer to const listint_t
  *
  */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
