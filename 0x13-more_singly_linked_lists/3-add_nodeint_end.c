#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list.
 * @head: pointer to the address of the head of
 * the listint_t list.
 * @n: integer which the new node will contain.
 *
 * Return: NULL if the function fails,
 * Otherwise, the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *l_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
		*head = n_node;

	else
	{
		l_node = *head;
		while (l_node->next != NULL)
			l_node = l_node->next;
		l_node->next = n_node;
	}

	return (*head);
}
