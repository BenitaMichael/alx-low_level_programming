#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list
* sets the head to NULL
* @head: pointer to pointer to head node
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
