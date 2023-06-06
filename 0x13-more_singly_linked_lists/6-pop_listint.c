#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * listint_t list.
 * @head: pointer to the address of the head
 * of the listint_t list.
 *
 * Return: 0 if the linked list is empty.
 * Otherwise, the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *f_node;
	int num;

	if (*head == NULL)
		return (0);

	f_node = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(f_node);

	return (num);
}
