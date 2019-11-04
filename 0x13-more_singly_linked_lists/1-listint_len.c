#include <stdio.h>
#include "lists.h"
/**
  *listint_len - returns number of elements in linked list
  *@h: pointer of constant of type listint_t
  *Return: len: length of LL
  */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}
