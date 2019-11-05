#ifndef LISTS_H
#define LISTS_H
/**
  *struct listint_s - singly linked list
  *@n: string
  *@next: pointer to next node
  *Description: singly linked list structure BYS
  *for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif /* LISTS_H */