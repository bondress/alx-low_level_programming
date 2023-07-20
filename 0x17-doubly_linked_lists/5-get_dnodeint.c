#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to head of list
 * @index: index of node to return
 *
 * Return: a pointer to the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *act_nd = head;

	while (act_nd != NULL && index > 0)
	{
		act_nd = act_nd->next;
		index--;
	}
	if (index > 0 || act_nd == NULL)
	return (NULL);

	return (act_nd);
}
