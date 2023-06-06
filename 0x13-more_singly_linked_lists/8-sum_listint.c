#include "lists.h"

/**
 * sum_listint - computes the sum of all the
 * data (n) of a listint_t list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: 0 if the list is empty.
 * Otherwise, the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int tot = 0;

	while (head)
	{
		tot += head->n;
		head = head->next;
	}

	return (tot);
}
