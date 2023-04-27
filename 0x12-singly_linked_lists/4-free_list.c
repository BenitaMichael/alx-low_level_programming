#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: beginning of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
