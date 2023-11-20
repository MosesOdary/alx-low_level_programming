#include "lists.h"

/**
 * print_listint_safe - prints a list
 *
 * @head: list to print
 *
 * Return: number of nodes in list
*/

size_t print_listint_safe(const listint_t *head)
{
	uint32_t num = 0;
	int64_t diff = 0;

	while (head)
	{
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
			head = head->next;
		else
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);

		num++;
	}
	return (num);
}