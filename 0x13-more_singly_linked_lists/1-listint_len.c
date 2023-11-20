#include "lists.h"

/**
* listint_len - Counts number in list elements
*
* @h: List containing the elements
*
* Return: number of elements in list
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *this;

	this = malloc(sizeof(listint_t));

	if (!h || !this)
		return (0);


	this = h;

	while (this)
	{
		nodes++;
		this = this->next;
	}
	return (nodes);
}
