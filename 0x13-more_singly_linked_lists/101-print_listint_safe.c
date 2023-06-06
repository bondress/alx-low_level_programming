#include "lists.h"

/**
 * l_listint - counts the numberof unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check
 *
 * Return: 0 if the list is not looped.
 * Otherwise, number of unique nodes in the list.
 */
size_t l_listint(const listint_t *head)
{
	const listint_t *f_node, *l_node;
	size_t all = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	f_node = head->next;
	l_node = (head->next)->next;

	while (l_node)
	{
		if (f_node == l_node)
		{
			f_node = head;
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
 * print_listint_safe - prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t all, in = 0;

	all = l_listint(head);

	if (all == 0)
	{
		for (; head != NULL; all++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (in = 0; in < all; in++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (all);
}
