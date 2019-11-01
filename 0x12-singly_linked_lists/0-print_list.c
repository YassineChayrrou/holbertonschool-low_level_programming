#include "lists.h"
/**
  * print_list -prints the elements of a list
  * @h: pointer to constat list_t
  * Return: size_t
  */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *p = h;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		n++;
	}
	return (n);
}
