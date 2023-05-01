#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: head of a list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	/* backward (b), forward (f)*/
	listint_t *b = NULL;
	listint_t *f = NULL;

	while (*head != NULL)
	{
		f = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = f;
	}

	*head = b;
	return (*head);
}
