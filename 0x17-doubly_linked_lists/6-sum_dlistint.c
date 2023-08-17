#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * (n) of a dlistint_t list
 * @head: pointer to the list
 * Return: sum of all data in the list, (0) if the lost is empty
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
