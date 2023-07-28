#include "lists.h"
/**
 * list_len- list_len function
 * @h: pointer
 * Return: return Int
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
