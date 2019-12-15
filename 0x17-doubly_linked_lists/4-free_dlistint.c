#include "lists.h"
/**
  *free_dlistint - frees a Linked List
  *@head: pointer to the head node of the linked list
  */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
