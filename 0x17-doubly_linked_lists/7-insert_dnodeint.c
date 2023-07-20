#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a n_nd node in a dlistint_t
 * list at a given position.
 * @h: pointer to head of the dlistint_t list.
 * @idx: position to insert the n_nd node.
 * @n: integer for the n_nd node to contain.
 *
 * Return: the address of the n_nd node, otherwise NULL (if function fails)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t_nd = *h, *n_nd;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t_nd = t_nd->next;
		if (t_nd == NULL)
			return (NULL);
	}

	if (t_nd->next == NULL)
		return (add_dnodeint_end(h, n));

	n_nd = malloc(sizeof(dlistint_t));
	if (n_nd == NULL)
		return (NULL);

	n_nd->n = n;
	n_nd->prev = t_nd;
	n_nd->next = t_nd->next;
	t_nd->next->prev = n_nd;
	t_nd->next = n_nd;

	return (n_nd);
}
