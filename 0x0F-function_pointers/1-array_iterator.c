#include <stdio.h>
/**
 * array_iterator- function
 * @array: int array
 * @size: int array
 * @action: pointer function
 * Return: return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
