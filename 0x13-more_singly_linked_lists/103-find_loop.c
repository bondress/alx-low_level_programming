#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in
 * a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: NULL if there is no loop.
 * Otherwise, the address of the node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f_node, *l_node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	f_node = head->next;
	l_node = (head->next)->next;

	while (l_node)
	{
		if (f_node == l_node)
		{
			f_node = l_node;
			while (f_node != l_node)
			{
				f_node = f_node->next;
				l_node = l_node->next;
			}
			return (f_node);
		}
		f_node = f_node->next;
		l_node = (l_node->next)->next;
	}
	return (NULL);
}
