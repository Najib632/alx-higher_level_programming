#include "lists.h"

/**
 * check_cycle -  checks if a singly linked list has a cycle in it.
 * @list: singly linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 **/
int check_cycle(listint_t *list)
{
	listint_t *check_list = list;

	if (list == NULL)
		return (0);

	while ((check_list = check_list->next) != list)
	{
		check_list = check_list->next;
		list = list->next->next != NULL ? list->next->next : list->next;
		if (list == check_list)
			return (1);
	}
	return (0);
}
