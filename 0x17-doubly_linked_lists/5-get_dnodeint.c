#include "lists.h"
/**
  *get_dnodeint_at_index - returns node of specific index
  *@head: pointer to the head node of a linked list
  *@index: index of node
  *Return: head or NULL if failed
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
