#include "lists.h"

/**
* sum_listint - sums an integer list
*
* @head: integer list
*
* Return: sum of integers in list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
