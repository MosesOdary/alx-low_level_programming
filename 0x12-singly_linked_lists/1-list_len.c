#include "lists.h"

/**
* list_len - Counts number of elements in the list
*
* @h: the list
*
* Return: Number of elements in list
*/

size_t list_len(const list_t *h)
{
	uint32_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
