#include "lists.h"
#include <stdlib.h>

/**
 * insert_node_at_beginning - Insert a new node at the beginning of a linked list.
 * @head: Address of the pointer to the first node of the list.
 * @data: Integer value to be stored in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
