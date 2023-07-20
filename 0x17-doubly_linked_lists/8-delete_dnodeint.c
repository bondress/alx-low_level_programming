#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from a dlistint_t
 * at a given index.
 * @head: pointer to head of the dlistint_t.
 * @index: index of node to delete.
 *
 * Return: Upon failure - -1.
 *         Otherwise - 1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t_nd = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (t_nd == NULL)
			return (-1);
		t_nd = t_nd->next;
	}

	if (t_nd == *head)
	{
		*head = t_nd->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		t_nd->prev->next = t_nd->next;
		if (t_nd->next != NULL)
			t_nd->next->prev = t_nd->prev;
	}

	free(t_nd);
	return (1);
}
