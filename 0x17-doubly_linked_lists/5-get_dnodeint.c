#include "lists.h"
/**
  *get_dnodeint_at_index - returns node of specific index
  *@head: pointer to the head node of a linked list
  *@index: index of node
  *Return: head or NULL if failed
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, j;

	for (i = 0; head->next != NULL; i++)
		head = head->next;
	if (index > i)
		return (NULL);
	for (j = 0; j != i - index; j++)
		head = head->prev;
	return (head);
}
