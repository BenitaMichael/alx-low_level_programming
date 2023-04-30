#include "lists.h"

/**
 * print_listint - function that prints all the
 * elements of a list
 * @h: head of a list
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		printf("%d\n", h->no);
		h = h->next;
		no_nodes++;
	}

	return (no_nodes);
}
