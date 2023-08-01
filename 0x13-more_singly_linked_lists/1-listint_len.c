#include "lists.h"

/**
 * listint_len - Count the number of elements in the list.
 * @h: Pointer to the head of the list.
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
