#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_nodeint - add new node to LL
  *@head: head of LL
  *@n: element to add to LL
  *Return: head
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
