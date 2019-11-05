#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *sum_listint - sums elements of LL
  *@head: head element of LL
  *Return: 0 or sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
