#include "lists.h"
/**
  *add_dnodeint - adds a new node to the beginning of doubly linked list
  *@head: double pointer to the head node
  *@n: data to store in node
  *Return: pointer to new node or NULL in case of Failure
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *holder;

	holder = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (holder == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	}
	else
	{
		holder->prev = newNode;
		newNode->next = holder;
		//holder = newNode;
		*head = newNode;
		return (*head);
	}
}
