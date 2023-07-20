#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head of the dlistint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t all_nds = 0;

	while (h)
	{
		all_nds++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (all_nds);
}
