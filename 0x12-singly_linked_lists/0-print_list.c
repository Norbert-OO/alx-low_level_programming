#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: A pointer to the list to iterate through.
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t all;

	all = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		all++;
	}
	return (all);
}
