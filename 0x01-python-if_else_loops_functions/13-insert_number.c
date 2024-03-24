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

	if (*head == NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->n = number;
		node->next = *head;
		*head = node;
		return (node);
	}
	h = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = number;
	while (h != NULL)
	{
		curr = h->next;
		if (curr == NULL || (curr != NULL && number < curr->n))
		{
			if (number < h->n)
			{
				node->next = h;
				*head = node;
			}
			else
			{
				h->next = node;
				node->next = curr;
			}
			break;
		}
		h = h->next;
	}

	return (node);
}
