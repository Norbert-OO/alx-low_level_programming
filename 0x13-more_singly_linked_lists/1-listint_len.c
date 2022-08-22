#include "lists.h"

/**
 * listint_len - A function that returns the
 * number of elements in a linked list.
 * @h: A linked list
 *
 * Return: Returns the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
