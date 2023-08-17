#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the list
 * @index: nth node
 * Return: nth node, if the node doesn't exist, returns (NULL)
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int num = 0;

	while (node && num != index)
	{
		num++;
		node = node->next;
	}
	if (node && num == index)
		return (node);
	return (NULL);
}
