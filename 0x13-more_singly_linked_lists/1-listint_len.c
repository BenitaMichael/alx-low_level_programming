#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: A pointer to the head of the listint_t list
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{

		size_t no_nodes = 0;

		if (no_nodes)
		{
			h = h->next;
			no_nodes++;
		}

		return (no_nodes);
}
