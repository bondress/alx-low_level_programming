#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the address of the head
 * of the listint_t list.
 *
 * Description: the function sets the head to NULL
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *f_node;

	if (head == NULL)
		return;

	while (*head)
	{
		f_node = (*head)->next;
		free(*head);
		*head = f_node;
	}

	head = NULL;
}
