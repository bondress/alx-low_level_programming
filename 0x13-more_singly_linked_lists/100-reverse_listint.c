#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 * @head: pointer to the addres of the head of
 * the listint_t list
 *
 * Return: pointer to the first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *f_node, *l_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	l_node = NULL;

	while ((*head)->next != NULL)
	{
		f_node = (*head)->next;
		(*head)->next = l_node;
		l_node = *head;
		*head = f_node;
	}

	(*head)->next = l_node;

	return (*head);
}
