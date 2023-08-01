#include "lists.h"
#include <stdio.h>

/**
 * display_listint_elements - Display elements of a singly linked list.
 * @head: Pointer to the head of the list.
 * Return: Number of elements in the list.
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
