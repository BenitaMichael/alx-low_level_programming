#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * of a listint_t list
 * @head: pointer to the address of the head of the listint_t list
 * Return: If the linked list is empty (0) or the
 * head node's data (n
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (*head == NULL)
		return (0);

	temp = *head;
	number = (*head)->no;
	*head = (*head)->next;

	free(temp);

	return (number);
}
