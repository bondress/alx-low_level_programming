#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the list to be printed
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t all = 0;

	while (h != NULL)
	{
		all++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (all);
}
