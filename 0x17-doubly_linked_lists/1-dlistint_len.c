#include "lists.h"


size_t dlistint_len(const dlistint_t *h)
{
	uint16_t i = 0;
	const dlistint_t *this = h;

	for (; this; i++)
	{
		this = this->next;
	}

	return i;
}
