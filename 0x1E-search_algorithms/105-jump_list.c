#include "search_algos.h"

/**
 * jump_list - Searching for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp, stp_size;
	listint_t *nd, *j;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	stp_size = sqrt(size);
	for (nd = j = list; j->index + 1 < size && j->n < value;)
	{
		nd = j;
		for (stp += stp_size; j->index < stp; j = j->next)
		{
			if (j->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, j->index);

	for (; nd->index < j->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
