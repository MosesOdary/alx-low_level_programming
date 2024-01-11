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

	if (!h)
		return (i);

	for (; h->next; i++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}

	printf("%d\n", h->n);
	h = h->next;
	i++;

	return (i);
}
