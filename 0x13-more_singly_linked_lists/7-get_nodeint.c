#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of
 * a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * @index: index of the node to locate.
 *
 * Return: NULL if the node does not exist.
 * Otherwise, the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ui;

	for (ui = 0; ui < index; ui++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
