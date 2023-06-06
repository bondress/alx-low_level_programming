#include "lists.h"

/**
 * listint_len - prints the number of elements
 * in a linked listint_t list.
 * @h: pointer to the head of the listint_t list.
 *
 * Return: number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t all = 0;

	while (h != NULL)
	{
		all++;
		h = h->next;
	}

	return (all);
}
