#include "lists.h"
#include <stdlib.h>

/**
 * release_listint - Release the memory occupied by a linked list.
 * @head: Pointer to the first node of the list.
 **/

void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
