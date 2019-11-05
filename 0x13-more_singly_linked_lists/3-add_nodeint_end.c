#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_nodeint_end - add new node to the tail of LL
  *@head: head of list
  *@n: element to add to LL
  *Return: head
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new_node;
	new_node->next = NULL;
	return (*head);
}
