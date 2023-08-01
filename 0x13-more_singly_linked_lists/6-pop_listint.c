#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint- Remove the first element of a singly linked list.
 * @head: Pointer to the head of the list.
 * Return: Integer value of the removed element if success; otherwise, 0.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}
