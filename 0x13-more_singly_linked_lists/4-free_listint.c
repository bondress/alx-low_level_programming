#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the listint_t
 * list to be freed.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *f_node;

	while (head)
	{
		f_node = head->next;
		free(head);
		head = f_node;
	}
}
