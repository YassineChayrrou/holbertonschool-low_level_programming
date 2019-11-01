#include "lists.h"
#include <stdio.h>
/**
  * print_list -prints the elements of a list
  * @h: pointer to constat list_t
  * Return: c
  */
size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t c;

	c = 0;
	p = h;
	while (p != NULL)
	{
		printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		c++;
	}

	return (c);
}
