#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *get_nodeint_at_index - gets the nth node of LL
  *@head: head node
  *@index: number of node to get
  *Return: NULL or head(points to nth node)
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int c;

	c = 0;
	while (c < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		c++;
	}
	return (head);
}
