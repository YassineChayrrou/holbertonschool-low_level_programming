#include "lists.h"
/**
  *sum_dlistint - return the sum of linked list data
  *@head: pointer to the head node of a LL
  *Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
