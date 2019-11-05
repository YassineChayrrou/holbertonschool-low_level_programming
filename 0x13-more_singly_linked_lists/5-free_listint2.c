#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *
  *
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *to_free;

	while (head != NULL)
	{
		to_free = *head;
		free(to_free);
		to_free->next;
	}
	*head = NULL;
}
