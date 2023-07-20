#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of a doubly linked list
 * @head: pointer to head of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_tot = 0;

	while (head != NULL)
	{
		sum_tot += head->n;
		head = head->next;
	}
	return (sum_tot);
}
