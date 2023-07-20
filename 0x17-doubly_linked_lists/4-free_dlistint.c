#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list.
 * @head: head of dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t_nd;

	while (head)
	{
		t_nd = head->next;
		free(head);
		head = t_nd;
	}
}
