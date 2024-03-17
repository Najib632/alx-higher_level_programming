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

	printf("list[%p] == check_list[%p]\n", (void *)list, (void *)check_list);
	while ((check_list = check_list->next) != list)
	{
		printf("list[%p] == check_list[%p]\n", (void *)list, (void *)check_list);
		if (&(*list) == &(*check_list))
			return (1);
	}
	return (0);
}
