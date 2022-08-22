#include "lists.h"

/**
 * pop_listint - A function that deletes the head node
 * of a linked list.
 * @head: The linked list
 *
 * Return: Returns the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || *head)
		return (0);

	else
	{
		num = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (num);
}
