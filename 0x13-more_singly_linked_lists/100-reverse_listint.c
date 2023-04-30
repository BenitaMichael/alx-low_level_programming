#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *behind = NULL:
	listint_t *ahead = NULL;

	while (*head)
	{
		no = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = no;
	}

	*head = behind;
	return (*head);
}
