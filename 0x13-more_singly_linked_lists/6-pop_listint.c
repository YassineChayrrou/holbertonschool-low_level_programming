#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *pop_listint - free first elements in LL
  *@head: head of LL
  *Return: 0 or n
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *pop;

	if (head == NULL)
		return (0);
	pop = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(pop);
	return (n);
}
