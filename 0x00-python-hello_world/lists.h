#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_L - single linked list
 * @n: the integer
 * @next: pointer to the next node
 * Description: structure for the sinly linked list node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free-listint(list_t *head);
int check_cycle(listint_t *list);

#endif /* List.h file*/
