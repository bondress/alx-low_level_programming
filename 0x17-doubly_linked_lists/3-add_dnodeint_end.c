#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of a dlistint_t list.
 * @head: pointer to head of the dlistint_t list.
 * @n: integer for new node to contain.
 *
 * Return: address of new node, otherwise NULL (if function fails)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_nd, *l_nd;

	n_nd = malloc(sizeof(dlistint_t));
	if (n_nd == NULL)
		return (NULL);

	n_nd->n = n;
	n_nd->next = NULL;

	if (*head == NULL)
	{
		n_nd->prev = NULL;
		*head = n_nd;
		return (n_nd);
	}

	l_nd = *head;
	while (l_nd->next != NULL)
		l_nd = l_nd->next;
	l_nd->next = n_nd;
	n_nd->prev = l_nd;

	return (n_nd);
}
