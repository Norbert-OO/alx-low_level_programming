#include "lists.h"

/**
 * add_nodeint - A function that adds new new at the beginning of a linked list
 * @head: Pointer to the first node in the list
 * @n: data to insert in that new node
 *
 *
 * Return: Pointer to the new node, or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

