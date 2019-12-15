#include "lists.h"
/**
  *add_dnodeint_end - adds new node to end of linked list
  *@head: double pointer to the head node
  *@n: data to store in node
  *Return: pointer to new node or NULL at failure
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tail;

	tail = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (tail == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	}
	else
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newNode;
		newNode->prev = tail;
		newNode->next = NULL;
		tail = newNode;
		return (tail);
	}
}
