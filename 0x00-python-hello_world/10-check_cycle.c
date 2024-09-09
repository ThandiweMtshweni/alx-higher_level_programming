#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - function that checks whether a
 * singly linked list contains a cycle
 * @list: a singly-linked list to be checked
 *
 * Return: 0 for false and 1 for true
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow && fast)
			return (1);
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
