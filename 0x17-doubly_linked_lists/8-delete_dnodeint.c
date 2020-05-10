#include "lists.h"
/**
  *list_len - return the length of LL
  *@head: pointer to head node of LL
  *Return: i
  */
unsigned int list_len(dlistint_t *head)
{
	unsigned int i;
	dlistint_t *temp;

	temp = head;
	for (i = 0; temp != NULL; ++i)
		temp = temp->next;
	return (i);
}
/**
  *delete_dnodeint_at_index - delete node at specific index
  *@head: pointer to head node of DLL
  *@index: index of node to delete
  *Return: -1 or 1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len, i = 0;
	dlistint_t *temp = NULL;

	if (*head == NULL)
		return (-1);
	temp = *head;
	len = list_len(*head);
	if (index == 0)
	{
		if (temp->next)
			*head = temp->next;
		else if (temp->next == NULL)
			*head = NULL;
		free(temp);
		return (1);
	}
	if (index < len && index > 0)
	{
		for (i = 0; i < index; ++i)
			temp = temp->next;
		if (index == len - 1)
			temp->prev->next = NULL;
		else
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
		}
		free(temp);
		return (1);
	}
	return (1);
}
