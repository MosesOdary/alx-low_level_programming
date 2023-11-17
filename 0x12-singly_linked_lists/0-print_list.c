#include "lists.h"

/**
* print_list - print a list
*
* @h: the list
*
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	uint32_t nodes = 0;


	while (h)
	{
		if (!h->str)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
