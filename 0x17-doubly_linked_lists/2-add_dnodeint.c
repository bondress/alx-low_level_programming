#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of a dlistint_t list.
 * @head: pointer to head of dlistint_t list.
 * @n: integer for new node to contain.
 *
 * Return: address of the new node, otherwise NULL (if function fails)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_nd;

	n_nd = malloc(sizeof(dlistint_t));
	if (n_nd == NULL)
		return (NULL);

	n_nd->n = n;
	n_nd->prev = NULL;
	n_nd->next = *head;
	if (*head != NULL)
		(*head)->prev = n_nd;
	*head = n_nd;

	return (n_nd);
}
