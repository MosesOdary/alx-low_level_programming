#include "lists.h"

/**
* print_listint -  prints all the elements of a listint_t list.
*
* @h: list of elements
*
* Return: NUmber of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	uint8_t nodes = 0;
	const listint_t *this;

	if (!h)
		return (0);

	this = h;

	while (this)
	{
		printf("%d\n", this->n);
		nodes++;
		this = this->next;
	}

	return (nodes);
}
