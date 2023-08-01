#include "lists.h"

/**
 * count_listint_elements - Count the number of elements in the list.
 * @head: Pointer to the head of the list.
 * Return: Number of elements in the list.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
