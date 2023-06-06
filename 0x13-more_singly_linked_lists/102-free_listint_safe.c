#include "lists.h"

/**
 * cl_listint - counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: 0 if the list is not looped.
 * Otherwise, number of unique nodes in the list.
 */
size_t cl_listint(listint_t *head)
{
	listint_t *f_node, *l_node;
	size_t all = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	f_node = head->next;
	l_node = (head->next)->next;

	while (l_node)
	{
		if (f_node == l_node)
		{
			f_node = l_node;
			while (f_node != l_node)
			{
				all++;
				f_node = f_node->next;
				l_node = l_node->next;
			}
			f_node = f_node->next;
			while (f_node != l_node)
			{
				all++;
				f_node = f_node->next;
			}
			return (all);
		}
		f_node = f_node->next;
		l_node = (l_node->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t safely
 * (lists containing loops)
 * @h: pointer to the address of the head of the
 * listint_t list.
 *
 * Description: function sets head to NULL
 *
 * Return: size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t_node;
	size_t all, in;

	all = cl_listint(*h);

	if (all == 0)
	{
		for (; h != NULL && *h != NULL; all++)
		{
			t_node = (*h)->next;
			free(*h);
			*h = t_node;
		}
	}
	else
	{
		for (in = 0; in < all; in++)
		{
			t_node = (*h)->next;
			free(*h);
			*h = t_node;
		}

		*h = NULL;
	}
	h = NULL;
	return (all);
}
