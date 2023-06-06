#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
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
	size_t l = 0;
	int d;
	listint_t *t_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t_node = (*h)->next;
			free(*h);
			*h = t_node;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
