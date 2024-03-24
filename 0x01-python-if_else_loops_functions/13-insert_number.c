#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: head node of listint_t linked list
 * @number: number to be inserted into node
 *
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *h = NULL;
	listint_t *curr = NULL;
	listint_t *node = NULL;

	if (head == NULL)
		return (NULL);
	h = *head;
	while (h != NULL)
	{
		curr = h->next;
		if (h->n < number && curr->n > number)
		{
			node = malloc(sizeof(listint_t));
			if (node == NULL)
				return (NULL);
			node->n = number;
			h->next = node;
			node->next = curr;
		}
		h = h->next;
	}

	return (node);
}
