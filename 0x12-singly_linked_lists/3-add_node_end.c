#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * _strdup -  string duplicate function
  * @src: string to duplicate
  * Return: dest
  */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
  * add_node_end - add new nodes to the end of the list
  * @head: local place in the list
  * @str: string to be added to head
  * Return: head: pointer to local in LL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *local;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	duplicate = _strdup(str);
	if (duplicate == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = duplicate;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	local = *head;
	while (local->next != NULL)
		local = local->next;
	local->next = new;
	return (*head);
}
