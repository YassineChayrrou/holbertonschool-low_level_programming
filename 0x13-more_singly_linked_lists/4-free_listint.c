#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *free_listint - free LL
  *@head: head position in LL
  */
void free_listint(listint_t *head)
{
	listint_t *to_free;

	while (head != NULL)
	{
		to_free = head;
		free(head);
		head = to_free->next;
	}
}
