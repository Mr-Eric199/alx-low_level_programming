#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to find (starting from 0).
 * Return: Pointer to the found node or NULL if not found.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
