#include "lists.h"

/**
 * print_listint_safe - prints a list
 *
 * @head: list to print
 *
 * Return: nodesber of nodes in list
*/

size_t print_listint_safe(const listint_t *head)
{
	uint32_t nodes = 0;
	int64_t diff;

	while (head)
	{
		nodes++;
	
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
	
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}