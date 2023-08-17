#include "lists.h"

/**
 * free_dlistint - functions that frees a dlistint_t
 * list
 * @head: pointer to the list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *exact_node;
	dlistint_t *next_node;

	if (head)
	{
		exact_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(exact_node);
			exact_node = next_node;
			next_node = next_node->next;
		}
		free(exact_node);
	}
}
