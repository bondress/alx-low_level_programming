#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a
 * listint_t list at a given position.
 * @head: pointer to the address of the head of the
 * listint_t list.
 * @idx: index of the listint_t list where the new
 * node should be added
 * @n: integer which the new node will contain.
 *
 * Return: NULL if the function fails.
 * Otherwise, the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *c_node = *head;
	unsigned int ui;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = c_node;
		*head = n_node;
		return (n_node);
	}

	for (ui = 0; ui < (idx - 1); ui++)
	{
		if (c_node == NULL || c_node->next == NULL)
			return (NULL);

		c_node = c_node->next;
	}

	n_node->next = c_node->next;
	c_node->next = n_node;

	return (n_node);
}
