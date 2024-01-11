#include "lists.h"


size_t dlistint_len(const dlistint_t *h)
{
	uint16_t i = 0;

	for (; h->next; i++)
	{
	}

	return ++i;
}
