#include "lists.h"

/**
 * *print_listint - A function that prints all elements of the linked list
 * @h: Singly linked list, the head.
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
			h = h->next;
			node++;
	}
	return (node);
}
