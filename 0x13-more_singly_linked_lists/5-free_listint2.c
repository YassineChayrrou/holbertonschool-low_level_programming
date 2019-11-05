#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *free_listint2 - free LL2
  *@head: double pointer
  */
void free_listint2(listint_t **head)
{
	listint_t *to_free;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		to_free = *head;
		free(to_free);
		(*head)->->next;
	}
}
