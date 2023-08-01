#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- Frees a linked list and resets the head pointer to NULL.
 * @head: Address of the pointer to the first node of the list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
