#include "lists.h"
#include <stdio.h>
/**
  * print_list -prints the elements of a list
  * @h: pointer to constat list_t
  * Return: c
  */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}

	return (c);
}
