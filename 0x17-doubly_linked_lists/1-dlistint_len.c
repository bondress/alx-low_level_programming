#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t all_nds = 0;

	while (h)
	{
		all_nds++;
		h = h->next;
	}
	return (all_nds);
}
