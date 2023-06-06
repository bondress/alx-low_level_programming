#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 * given index of a listint_t list.
 * @head: pointer to the address of the head of the
 * listint_t list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t_node, *c_node = *head;
	unsigned int uin;

	if (c_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c_node);
		return (1);
	}

	for (uin = 0; uin < (index - 1); uin++)
	{
		if (c_node->next == NULL)
			return (-1);

		c_node = c_node->next;
	}
	t_node = c_node->next;
	free(t_node);
	return (1);
}
