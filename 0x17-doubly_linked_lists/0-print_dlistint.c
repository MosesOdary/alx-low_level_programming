#include "lists.h"

/**
 * print_dlistint - Prints all the elements of an int list
 *
 * @h: The list being printed
 *
 * Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	uint16_t i = 0;
	dlistint_t * this = h;

	if (!h)
		return (-1);

	for (; this; i++)
	{
		printf("%d\n", h->n);
		this = this->next;

	}

	return (i);
}
