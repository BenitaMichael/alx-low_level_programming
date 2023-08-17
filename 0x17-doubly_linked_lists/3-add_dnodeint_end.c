#include "lists.h"

/**
 * add_dnodeint_end - functions that adds node to the
 * end of distint_t list
 * @head: pointer to the first element of the list
 * @n: int to set in the new node
 * Return: address of the new element, or (NULL) if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ind = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (ind)
	{
		while (ind->next)
			ind = ind->next;
		new->prev = ind;
		ind->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
