#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of
 * a listint_t list.
 * @head: pointer to the address of the head of the
 * listint_t list.
 * @n: integer which the new node will contain
 *
 * Return: NULL if the function fails
 * Otherwise, the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
