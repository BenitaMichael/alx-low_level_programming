#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: A pointer to the head of the listint_t
 * list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
