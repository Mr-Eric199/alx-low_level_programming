#include "lists.h"
#include <stdlib.h>

/**
 * calculate_listint_sum - Calculate the sum of all data (n) in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Integer representing the sum of all data in the list.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
