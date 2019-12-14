#include "lists.h"
/**
  *print_dlistint - prints a linked list
  *@h: pointer to first node of a linked list
  *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
