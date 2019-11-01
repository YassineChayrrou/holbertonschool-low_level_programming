#include "lists.h"
#include <stdio.h>
/**
  * print_list -prints the elements of a list
  * @h: pointer to constat list_t
  * Return: i
  */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
